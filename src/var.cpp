#include <sstream>
#include <iomanip>
#include <limits>
#include <stdexcept>
#include <algorithm>
#include "var.hpp"

#define DYN_DEBUG_OUT 0

const var k_state(u"ST");
const var k_level(u"LV");
const var k_notEmpty(u"NE");
const var k_from(u"FR");
const var k_to(u"TO");
const var k_exceptions(u"EX");
const var k_name(u"NM");

var::var(const var &other) : type(other.type)
{
    switch (type)
    {
    case STRING:
        str = other.str;
        break;
    case NUMBER:
    case BOOLEAN:
        number = other.number;
        break;
    case OBJECT:
        dc = other.dc;
        break;
    case ARRAY:
        arr = other.arr;
        break;
    case UNDEFINED:
        // do nothing
        break;
    default:
        throw std::runtime_error("unimplemented type");
    }
}

var::var(var &&other) : type(other.type), str(std::move(other.str)), number(other.number), dc(std::move(other.dc)), arr(std::move(other.arr))
{
    switch (type)
    {
    case STRING:
    case NUMBER:
    case BOOLEAN:
    case OBJECT:
    case ARRAY:
    case UNDEFINED:
        // do nothing
        break;
    default:
        throw std::runtime_error("unimplemented type");
    }
}

var::var(vartype type) : type(type)
{
    switch (type)
    {
    case STRING:
        str = std::u16string();
        break;
    case NUMBER:
    case BOOLEAN:
        number = 0;
        break;
    case OBJECT:
        dc = std::make_shared<objectvar>();
        break;
    case ARRAY:
        arr = std::make_shared<std::vector<var>>();
        break;
    case UNDEFINED:
        // do nothing
        break;
    default:
        throw std::runtime_error("unimplemented type");
    }
}

var::var() : type(OBJECT)
{
    dc = std::make_shared<objectvar>();
}

var::var(const char *value) : type(value == NULL ? OBJECT : STRING)
{
    if (value == NULL)
    {
        dc = std::shared_ptr<objectvar>();
    }
    else
    {
        str = u16converter{}.from_bytes(value);
    }
}

var::var(const std::u16string &value) : type(STRING)
{
    str = value;
}

var::var(const char16_t *value) : type(value == NULL ? OBJECT : STRING)
{
    if (value == NULL)
    {
        dc = std::shared_ptr<objectvar>();
    }
    else
    {
        str = value;
    }
}

var::var(const std::string &value) : type(STRING)
{
    const char *temp = value.c_str();
    str = u16converter{}.from_bytes(temp, temp + value.length());
}

var::var(double value) : type(NUMBER)
{
    number = value;
}

var::var(bool val) : type(BOOLEAN)
{
    number = val;
}

var::var(std::shared_ptr<objectvar> value) : type(OBJECT)
{
    dc = std::move(value);
}

var::var(int value) : var{static_cast<double>(value)}
{
}

var::var(const std::shared_ptr<std::vector<var>> val) : type(ARRAY)
{
    arr = val;
}

var var::toString() const
{
    std::u16string strResult;

    switch (type)
    {
    case UNDEFINED:
        strResult.append(u"undefined");
        break;

    case STRING:
    {
        strResult.append(str);
    }
    break;

    case NUMBER:
    {
        std::ostringstream oss;
        oss << std::setprecision(std::numeric_limits<double>::digits10) << std::noshowpoint << number;
        strResult.append(u16converter{}.from_bytes(oss.str().c_str()));
    }
    break;

    case OBJECT:
        if (dc == NULL)
        {
            strResult.append(u"null");
        }
        else
        {
            strResult.append(dc->toString().getU16String());
        }
        break;

    case ARRAY:
    {
        std::ostringstream oss;
        oss << "[";
        for (auto it = arr->begin(); it != arr->end(); it++)
        {
            if (it != arr->begin())
            {
                oss << ",";
            }
            oss << it->toString();
        }
        oss << "]";
        strResult.append(u16converter{}.from_bytes(oss.str().c_str()));
    }
    break;

    case BOOLEAN:
        *this ? strResult.append(u"true") : strResult.append(u"false");
        break;

    default:
        throw std::runtime_error("unimplemented type");
    }

    return strResult;
}

std::shared_ptr<std::vector<var>> var::getVector()
{
    if (type == ARRAY)
    {
        return arr;
    }
    else
    {
        throw std::runtime_error("getVector can only be called on array type");
    }
}

std::shared_ptr<std::vector<var>> var::getVector() const
{
    if (type == ARRAY)
    {
        return arr;
    }
    else
    {
        throw std::runtime_error("getVector can only be called on array type");
    }
}

std::u16string &var::getU16String()
{
    if (type == STRING)
    {
        return str;
    }
    else
    {
        throw std::runtime_error("getU16String can only be called on string type");
    }
}

const std::u16string &var::getU16String() const
{
    if (type == STRING)
    {
        return str;
    }
    else
    {
        throw std::runtime_error("getU16String can only be called on string type");
    }
}

void replaceSpecialCharacters(std::u16string &dest, const std::u16string &source)
{
    dest.reserve(source.length());
    for (char16_t ch : source)
    {
        if (ch == '\"')
        {
            dest.append(u"\\\"");
        }
        else if (ch == '\\')
        {
            dest.append(u"\\\\");
        }
        else if (ch == '\b')
        {
            dest.append(u"\\b");
        }
        else if (ch == '\f')
        {
            dest.append(u"\\f");
        }
        else if (ch == '\n')
        {
            dest.append(u"\\n");
        }
        else if (ch == '\r')
        {
            dest.append(u"\\r");
        }
        else if (ch == '\t')
        {
            dest.append(u"\\t");
        }
        else if (ch < '\u0020')
        {
            std::stringstream stream;
            stream << std::setfill('0') << std::setw(4) << std::hex << ch;
            std::string result;
            dest.append(u"\\u");
            dest.append(u16converter{}.from_bytes(stream.str()));
        }
        else
        {
            dest.push_back(ch);
        }
    }
}

var var::toJSON() const
{
    switch (type)
    {
    case UNDEFINED:
        return "undefined";
    case STRING:
    {
        std::u16string dest;
        replaceSpecialCharacters(dest, str);

        var result = u"\"";
        result.getU16String().append(dest);
        result.getU16String().append(u"\"");
        return result;
    }
    case NUMBER:
    case BOOLEAN:
        return toString();
    case OBJECT:
        return dc == NULL ? "null" : dc->toJSON();
    case ARRAY:
    {
        std::ostringstream oss;
        oss << "[";
        for (auto it = arr->begin(); it != arr->end(); it++)
        {
            if (it != arr->begin())
            {
                oss << ",";
            }
            oss << it->toJSON();
        }
        oss << "]";
        return oss.str();
    }
    default:
        throw std::runtime_error("unimplemented type");
    }
}

var var::toCode() const
{
    switch (type)
    {
    case UNDEFINED:
        return "undefined()";
    case STRING:
    {
        std::u16string dest;
        replaceSpecialCharacters(dest, str);

        var result = u"\"";
        result.getU16String().append(dest);
        result.getU16String().append(u"\"");
        return result;
    }
    case NUMBER:
        if (isNaN(*this))
        {
            return "NAN";
        }
        else if (isInfinity(*this))
        {
            if (number < 0)
            {
                return "-INFINITY";
            }
            else
            {
                return "INFINITY";
            }
        }
        else
        {
            return toString();
        }
    case BOOLEAN:
        return toString();
    case OBJECT:
        if (dc == NULL)
        {
            return "null()";
        }
        else
        {
            var result = u"json::parse(uR\"(";
            result += dc->toJSON();
            result += ")\")";
            return result;
        }
    case ARRAY:
    {
        std::ostringstream oss;
        oss << "array(";
        for (auto it = arr->begin(); it != arr->end(); it++)
        {
            if (it != arr->begin())
            {
                oss << ",";
            }
            oss << it->toCode();
        }
        oss << ")";
        return oss.str();
    }
    default:
        throw std::runtime_error("unimplemented type");
    }
}

double var::getNumber() const
{
    if (type == NUMBER)
    {
        return number;
    }
    else
    {
        throw std::runtime_error("getNumber can only be called on number type");
    }
}

var var::toNumber() const
{
    double result;
    switch (type)
    {
    case UNDEFINED:
        result = 0;
        break;

    case STRING:
    {
        std::string s = u16converter{}.to_bytes(str);
        const char *cstr = s.c_str();
        char *end;
        result = strtod(cstr, &end);
        if (end == cstr)
        {
            result = NAN;
        }
    }
    break;

    case NUMBER:
        result = number;
        break;

    case OBJECT:
        result = 0;
        break;

    case ARRAY:
        result = static_cast<double>(arr->size());
        break;

    case BOOLEAN:
        result = *this ? 1 : 0;
        break;

    default:
        throw std::runtime_error("unimplemented type");
    }

    return result;
}

vartype var::getType() const
{
    return type;
}

var &var::operator+=(const var &other)
{
    if (getType() == ARRAY && other.getType() == ARRAY) // array concatenation
    {
        arr->reserve(arr->size() + other.arr->size());
        arr->insert(arr->end(), other.arr->begin(), other.arr->end());
        return *this;
    }
    else if (getType() == OBJECT && other.getType() == OBJECT) // merge objects
    {
        if (dc != NULL && other.dc != NULL)
        {
            for (auto &entry : other.dc->data)
            {
                // possibly overwrite existing entries (map.insert does not override!)
                dc->data[entry.first] = entry.second;
            }
        }
        return *this;
    }
    else if (getType() == ARRAY) // array and value concatenation
    {
        arr->push_back(other);
        return *this;
    }
    else if ((getType() == NUMBER || getType() == BOOLEAN) && (other.getType() == NUMBER || other.getType() == BOOLEAN)) // normal addition
    {
        number = toNumber().getNumber() + other.toNumber().getNumber();
        return *this;
    }
    else if (getType() == STRING)
    {
        getU16String().append(other.toString().getU16String());
        return *this;
    }
    else
    {
        throw std::runtime_error("operator+= not implemented.");
    }
}

var var::operator+(const var &other) const
{
    if (getType() == ARRAY && other.getType() == ARRAY) // array concatenation
    {
        var result = array();
        result.getVector()->reserve(arr->size() + other.arr->size());
        result.getVector()->insert(result.getVector()->end(), arr->begin(), arr->end());
        result.getVector()->insert(result.getVector()->end(), other.arr->begin(), other.arr->end());
        return result;
    }
    else if (getType() == OBJECT && other.getType() == OBJECT) // merge objects
    {
        if (dc != NULL)
        {
            var result;
            result.dc->data = dc->data;
            if (other.dc != NULL)
            {
                for (auto &entry : other.dc->data)
                {
                    // possibly overwrite existing entries (map.insert does not override!)
                    result.dc->data[entry.first] = entry.second;
                }
            }
            return result;
        }
        else
        {
            return null();
        }
    }
    else if (getType() == ARRAY) // array and value concatenation
    {
        var result = array();
        result.getVector()->reserve(arr->size() + 1);
        result.getVector()->insert(result.getVector()->end(), arr->begin(), arr->end());
        result.getVector()->push_back(other);
        return result;
    }
    else if ((getType() == NUMBER || getType() == BOOLEAN) && (other.getType() == NUMBER || other.getType() == BOOLEAN)) // normal addition
    {
        return this->toNumber().getNumber() + other.toNumber().getNumber();
    }
    else // string concatenation
    {
        var result = this->toString();
        result.getU16String().append(other.toString().getU16String());
        return result;
    }
}

/**
 * If differenceOrIntersection is set to false, it will calculate the difference, otherwise the intersection of both arrays.
 */
void var::performArrayOperation(bool differenceOrIntersection, var &target, const var &other) const
{
    if (other.getType() != ARRAY || target.getType() != ARRAY)
    {
        throw std::runtime_error("performArrayOperation only available on ARRAY type.");
    }

    std::vector<var> a;

    // target and other may point to the same array
    const std::vector<var> &b = target == other ? a : *other.getVector();

    target.arr->swap(a);
    // now: target points to an empty vector, a points to the first operand value.
    // b point to either original target content if target==other, otherwise to vector of other

    for (auto &item : a)
    {
        bool found = std::find(b.begin(), b.end(), item) != b.end();
        if (found == differenceOrIntersection)
        {
            target.getVector()->push_back(item);
        }
    }
}

/**
 * If differenceOrIntersection is set to false, it will calculate the difference, otherwise the intersection of both arrays.
 */
void var::performObjectOperation(bool differenceOrIntersection, var &target, const var &other) const
{
    if (other.getType() != OBJECT || target.getType() != OBJECT)
    {
        throw std::runtime_error("performObjectOperation only available on OBJECT type.");
    }

    if (target.dc && other.dc)
    {
        objectvar a;

        // target and other may point to the same objectvar
        objectvar &b = target == other ? a : *other.dc;

        a.data.swap(target.dc->data);

        // now: target points to an empty map, a points to the first operand value.
        // b point to either original target content if target==other, otherwise to data map of other

        for (auto &item : a.data)
        {
            bool found = b.data.find(item.first) != b.data.end();
            if (found == differenceOrIntersection)
            {
                target.dc->data[item.first] = item.second;
            }
        }
    }
}

var var::operator-(const var &other)
{
    if (getType() == ARRAY && other.getType() == ARRAY)
    {
        // calculate difference
        var result = *this + array(); // copy
        performArrayOperation(false, result, other);
        return result;
    }
    else if (getType() == OBJECT && other.getType() == OBJECT)
    {
        if (dc != NULL)
        {
            var result;
            result.dc->data = dc->data;
            performObjectOperation(false, result, other);
            return result;
        }
        return null();
    }
    else if ((getType() == NUMBER || getType() == BOOLEAN) && (other.getType() == NUMBER || other.getType() == BOOLEAN)) // normal substraction
    {
        return this->toNumber().getNumber() - other.toNumber().getNumber();
    }
    else
    {
        throw std::runtime_error("operator- unimplemented for given type.");
    }
}

var var::operator/(const var &other)
{
    if (getType() == ARRAY && other.getType() == ARRAY)
    {
        // deep copy of this array to result
        var result(std::make_shared<std::vector<var>>(*this->getVector()));

        // calculate intersection
        performArrayOperation(true, result, other);
        return result;
    }
    else if (getType() == OBJECT && other.getType() == OBJECT)
    {
        if (dc != NULL)
        {
            var result;
            result.dc->data = dc->data;
            performObjectOperation(true, result, other);
            return result;
        }
        return null();
    }
    else if (getType() == ARRAY && other.getType() == NUMBER)
    {
        if (other.number > 0)
        {
            std::size_t slice = (std::size_t)other.number;
            if (slice < arr->size())
            {
                auto newarray = std::make_shared<std::vector<var>>();
                newarray->reserve(arr->size() - slice);
                newarray->insert(newarray->begin(), arr->begin(), arr->end() - slice);
                return var(newarray);
            }
        }
        else
        {
            std::size_t slice = (std::size_t)-other.number;
            if (slice < arr->size())
            {
                auto newarray = std::make_shared<std::vector<var>>();
                newarray->reserve(arr->size() - slice);
                newarray->insert(newarray->begin(), arr->begin() + slice, arr->end());
                return var(newarray);
            }
        }
        return var(ARRAY); // empty array
    }
    else
    {
        throw std::runtime_error("operator/ unimplemented for given type.");
    }
}

var &var::operator/=(const var &other)
{
    if (getType() == ARRAY && other.getType() == ARRAY)
    {
        // calculate intersection
        performArrayOperation(true, *this, other);
        return *this;
    }
    else if (getType() == OBJECT && other.getType() == OBJECT)
    {
        performObjectOperation(true, *this, other);
        return *this;
    }
    else if (getType() == ARRAY && other.getType() == NUMBER)
    {
        if (other.number > 0)
        {
            std::size_t slice = (std::size_t)other.number;
            if (slice < arr->size())
            {
                arr->erase(arr->end() - slice, arr->end());
            }
            else
            {
                arr->clear(); // empty array
            }
        }
        else
        {
            std::size_t slice = (std::size_t)-other.number;
            if (slice < arr->size())
            {
                arr->erase(arr->begin(), arr->begin() + slice);
            }
            else
            {
                arr->clear(); // empty array
            }
        }
        return *this;
    }
    else
    {
        throw std::runtime_error("operator/ unimplemented for given type.");
    }
}

var &var::operator-=(const var &other)
{
    if (getType() == ARRAY && other.getType() == ARRAY)
    {
        // calculate difference
        performArrayOperation(false, *this, other);
        return *this;
    }
    else if (getType() == OBJECT && other.getType() == OBJECT)
    {
        performObjectOperation(false, *this, other);
        return *this;
    }
    else if ((getType() == NUMBER || getType() == BOOLEAN) && (other.getType() == NUMBER || other.getType() == BOOLEAN)) // normal substraction
    {
        number = toNumber().getNumber() - other.toNumber().getNumber();
        return *this;
    }
    else
    {
        throw std::runtime_error("operator-= not implemented.");
    }
}

bool var::operator==(const var &other) const
{
    if (type == other.type)
    {
        switch (type)
        {
        case UNDEFINED:
            return true;
        case STRING:
            return str == other.str;
        case NUMBER:
            return number == other.number;
        case OBJECT:
            return dc.get() == other.dc.get();
        case ARRAY:
            return arr == other.arr;
        case BOOLEAN:
            return !*this == !*this;
        default:
            throw std::runtime_error("unimplemented type");
        }
    }
    return false;
}

bool var::operator!=(const var &other) const
{
    return !(this->operator==(other));
}

bool var::operator!() const
{
    bool val = (bool)(*this);
    return !val;
}

var &var::get(const var &key)
{
    if (type == ARRAY)
    {
        return arr->at((std::size_t)key.getNumber());
    }
    else if (type == OBJECT && dc != NULL)
    {
        return dc->get(key);
    }
    throw std::runtime_error("cannot call get[] on non array / object type or null-object");
}

var &var::operator[](const var &v)
{
    return get(v);
}

bool var::operator<(const var &other)
{
    if (type == NUMBER || type == BOOLEAN)
    {
        return toNumber().getNumber() < other.toNumber().getNumber();
    }
    else
    {
        return toString().getU16String() < other.toString().getU16String();
    }
}

bool var::operator>(const var &other)
{
    if (type == NUMBER || type == BOOLEAN)
    {
        return toNumber().getNumber() > other.toNumber().getNumber();
    }
    else
    {
        return toString().getU16String() > other.toString().getU16String();
    }
}

bool var::operator>=(const var &other)
{
    return this->operator>(other) || this->operator==(other);
}

bool var::operator<=(const var &other)
{
    return this->operator<(other) || this->operator==(other);
}

var &var::operator++()
{
    switch (type)
    {
    case NUMBER:
        ++number;
        break;
    case ARRAY:
        arr->emplace_back(UNDEFINED);
        break;
    default:
        throw std::runtime_error("not implemented operator++ on non number / array type");
    }
    return *this;
}

var var::operator++(int)
{
    var temp = *this;
    ++*this;
    return temp;
}

var &var::operator--()
{
    switch (type)
    {
    case NUMBER:
        --number;
        break;
    default:
        throw std::runtime_error("not implemented operator-- on non number type");
    }
    return *this;
}

var var::operator--(int)
{
    var temp = *this;
    --*this;
    return temp;
}

var var::length() const
{
    switch (type)
    {
    case UNDEFINED:
        return 0;
    case STRING:
        return static_cast<double>(str.length());
    case NUMBER:
    case BOOLEAN:
        return toNumber();
    case OBJECT:
        return dc != NULL ? dc->length() : 0;
    case ARRAY:
        return static_cast<double>(arr->size());
    default:
        throw std::runtime_error("unimplemented type");
    }
}

var::operator bool() const
{
    switch (type)
    {
    case UNDEFINED:
        return false;
    case STRING:
        return !str.empty();
    case NUMBER:
    case BOOLEAN:
        return !isNaN(*this) && (bool)number;
    case OBJECT:
        return dc.get() != NULL;
    case ARRAY:
        return arr->size() > 0;
    default:
        throw std::runtime_error("unimplemented type");
    }
}

std::vector<var>::iterator var::begin()
{
    if (type == ARRAY)
    {
        return arr->begin();
    }
    throw std::runtime_error("cannot use for loop on non array type");
}

std::vector<var>::iterator var::end()
{
    if (type == ARRAY)
    {
        return arr->end();
    }
    throw std::runtime_error("cannot use for loop on non array type");
}

var var::keys()
{
    if (type == OBJECT && dc != NULL)
    {
        return dc->keys();
    }
    throw std::runtime_error("cannot call keys on non object type or null-object");
}

void doindent(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "  ";
    }
}

var createCharacterSet(var name, var from, var to, var exceptions)
{
    var cs;
    cs[k_name] = name;
    cs[k_from] = from;
    cs[k_to] = to;
    cs[k_exceptions] = exceptions;
    return cs;
}

objectvar::objectvar() : data()
{
    //    std::cout << "Constructor called." << std::endl;
}

objectvar::objectvar(const objectvar &other) : data(other.data), needsUndefinedCleanup(other.needsUndefinedCleanup)
{
    //    std::cout << "Copy Constructor called." << std::endl;
}

objectvar::objectvar(const objectvar &&other) : data(std::move(other.data)), needsUndefinedCleanup(other.needsUndefinedCleanup)
{
}

void objectvar::performUndefinedCleanup() const
{
    if (needsUndefinedCleanup)
    {
        for (auto it = data.begin(); it != data.end();)
        {
            if (it->second.getType() == UNDEFINED && it->second.autoUndefined)
            {
                it = data.erase(it);
            }
            else
            {
                it++;
            }
        }
        needsUndefinedCleanup = false;
    }
}

var &objectvar::get(const var &dynkey) const
{
    performUndefinedCleanup();
    auto key = dynkey.getType() == STRING ? dynkey.getU16String() : dynkey.toString().getU16String();
    auto it = data.find(key);
    if (it == data.end())
    {
        data.emplace(key, vartype::UNDEFINED);
        data[key].autoUndefined = true;
        needsUndefinedCleanup = true;
    }
    return data[key];
}

var objectvar::toString() const
{
    return u"[object]";
}

var objectvar::toJSON() const
{
    performUndefinedCleanup();

    var result = u"{";
    for (auto it = data.begin(); it != data.end(); it++)
    {
        if (it->second.getType() != UNDEFINED)
        {
            if (it != data.begin())
            {
                result.getU16String().append(u",");
            }

            std::u16string key;
            replaceSpecialCharacters(key, it->first);

            result.getU16String().append(u"\"");
            result.getU16String().append(key);
            result.getU16String().append(u"\":");
            result.getU16String().append(it->second.toJSON().getU16String());
        }
    }

    result.getU16String().append(u"}");
    return result;
}

bool objectvar::operator==(const objectvar &other) const
{
    return this == &other;
}

var objectvar::length() const
{
    performUndefinedCleanup();

    return static_cast<double>(data.size());
}

var objectvar::keys() const
{
    performUndefinedCleanup();

    var result = array();
    result.getVector()->reserve(data.size());
    for (auto &it : data)
    {
        result.getVector()->emplace_back(it.first);
    }
    return result;
}

std::ostream &operator<<(std::ostream &cout, const var &obj)
{

    cout << u16converter{}.to_bytes(obj.toString().getU16String());
    return cout;
}

var operator+(const char *str, const var &other)
{
    return var(str) + other;
}

var operator+(const std::string &str, const var &other)
{
    return var(str) + other;
}

var operator+(const std::u16string &str, const var &other)
{
    return var(str) + other;
}

var operator+(const double number, const var &other)
{
    return var(number) + other;
}

var operator-(const char *str, const var &other)
{
    return var(str) - other;
}

var operator-(const std::string &str, const var &other)
{
    return var(str) - other;
}

var operator-(const std::u16string &str, const var &other)
{
    return var(str) - other;
}

var operator-(const double number, const var &other)
{
    return var(number) - other;
}

void changeState(var &ctxStack, var &ctxState, var &valueStack)
{
    ctxStack.getVector()->emplace_back();
    var &ctx = ctxStack.getVector()->back();
    ctx[k_state] = ctxState;
    ctx[k_level] = valueStack.length();
}

bool matchesCS(const var &str, int &c, var &cs)
{
    const char16_t &ch = str.getU16String()[c];
    var &exceptions = cs[k_exceptions];
    if (ch >= cs[k_from].getNumber() && ch <= cs[k_to].getNumber())
    {
        bool notException = true;
        for (var &ex : exceptions)
        {
            notException &= (ch != ex.getNumber());
        }
        return notException;
    }
    return false;
}

void consumeWhiteSpaces(const var &str, int &c)
{
    while (true)
    {
        const char16_t &ch = str.getU16String()[c];
        if (ch == ' ' || ch == 0x0A || ch == 0x0D || ch == 0x09)
        {
            c++;
        }
        else
        {
            break;
        }
    }
}

class UnexpectedCharacterException : public std::runtime_error
{
private:
    char16_t ch;
    int position;

public:
    UnexpectedCharacterException(char16_t ch, int position) : runtime_error("Unexpected character"), ch(ch), position(position) {}
    int getPosition() { return position; }
    char16_t getUnexpectedCharacter() { return ch; }
};

void consumeDigitsAtLeastOne(const var &str, int &c, var &digitCS)
{
    int before = c;
    while (matchesCS(str, c, digitCS)) // consume all digits, at least one
    {
        c++;
    }
    if (c == before)
    {
        throw UnexpectedCharacterException(str.getU16String()[c], c);
    }
}

char16_t consumeAndGetEscapeSequence(const var &str, int &c, var &hex_AF_CS, var &hex_af_CS, var &digitCS)
{
    std::u16string s = str.getU16String();

    if (s[c] == '\\')
    {
        c++;
    }
    else
    {
        throw UnexpectedCharacterException(s[c], c);
    }

    if (s[c] == '"')
    {
        c++;
        return '"';
    }
    else if (s[c] == '\\')
    {
        c++;
        return '\\';
    }
    else if (s[c] == '/')
    {
        c++;
        return '/';
    }
    else if (s[c] == 'b')
    {
        c++;
        return '\b';
    }
    else if (s[c] == 'f')
    {
        c++;
        return '\f';
    }
    else if (s[c] == 'n')
    {
        c++;
        return '\n';
    }
    else if (s[c] == 'r')
    {
        c++;
        return '\r';
    }
    else if (s[c] == 't')
    {
        c++;
        return '\t';
    }
    else if (s[c] == 'u') // hex code
    {
        c++;
        int before = c;
        while ((c - before) < 4 && (matchesCS(str, c, hex_AF_CS) || matchesCS(str, c, hex_af_CS) || matchesCS(str, c, digitCS)))
        {
            c++;
        }
        if (c - before == 4)
        {
            std::u16string hexU16(str.getU16String(), before, 4);
            std::string hexStr(u16converter{}.to_bytes(hexU16));
            unsigned int x;
            std::stringstream ss;
            ss << std::hex << hexStr;
            ss >> x;
            return (char16_t)x;
        }
        else
        {
            throw UnexpectedCharacterException(s[c], c);
        }
    }
    throw UnexpectedCharacterException(s[c], c);
}

var GET_json = 1;
var GET_VALUE = 2;
var GET_STRING = 3;
var GET_CHARACTERS = 4;
var GET_OBJECT = 5;
var GET_MEMBERS = 6;
var GET_NUMBER = 7;
var GET_ARRAY = 8;
var GET_TRUE_FALSE_NULL = 9;

var json::parseCore(const var &str)
{
    var ctxStack = array();
    var valueStack = array();

    int c = 0;

    // consume potential utf-8 BOM
    if (str.length() >= 1 && str.getU16String()[0] == 0xFEFF)
    {
        c += 1;
    }

    changeState(ctxStack, GET_json, valueStack);

    while (ctxStack.length() > 0)
    {
        var &ctx = ctxStack.getVector()->back();
        int level = (int)(valueStack.length().getNumber() - ctx[k_level].getNumber());

        if (ctx[k_state] == GET_json)
        {
            if (level == 0) // call function
            {
                changeState(ctxStack, GET_VALUE, valueStack);
            }
            else if (level == 1) // read function return, expected level 1
            {
                if (str.length() == c)
                {
                    return valueStack.getVector()->back(); // return
                }
                else
                {
                    throw UnexpectedCharacterException(str.getU16String()[c], c);
                }
            }
            else
            {
                throw std::runtime_error("illegal state: stack level on GET_json");
            }
        }
        else if (ctx[k_state] == GET_VALUE)
        {
            if (level == 0) // call function
            {
                consumeWhiteSpaces(str, c);
                if (str.getU16String()[c] == '\"')
                {
                    changeState(ctxStack, GET_STRING, valueStack);
                }
                else if (str.getU16String()[c] == '{')
                {
                    changeState(ctxStack, GET_OBJECT, valueStack);
                }
                else if (matchesCS(str, c, digitCS) || str.getU16String()[c] == '-')
                {
                    changeState(ctxStack, GET_NUMBER, valueStack);
                }
                else if (matchesCS(str, c, digitCS) || str.getU16String()[c] == '[')
                {
                    changeState(ctxStack, GET_ARRAY, valueStack);
                }
                else
                {
                    changeState(ctxStack, GET_TRUE_FALSE_NULL, valueStack);
                }
            }
            else if (level == 1) // read function return, expected level 1
            {
                consumeWhiteSpaces(str, c);
                // level 1 was expected and is also the return
                // of GET_VALUE state.
                ctxStack.getVector()->pop_back(); // return
            }
            else
            {
                throw std::runtime_error("illegal state: stack level on GET_VALUE");
            }
        }
        else if (ctx[k_state] == GET_ARRAY)
        {
            if (level == 0) // put empty array on stack
            {
                if (str.getU16String()[c] == '[')
                {
                    c++;
                    valueStack.getVector()->emplace_back(ARRAY);
                }
                else
                {
                    throw UnexpectedCharacterException(str.getU16String()[c], c);
                }
            }
            else if (level == 1) // expected stack [array]
            {
                consumeWhiteSpaces(str, c);
                if (str.getU16String()[c] == ']')
                {
                    c++;
                    // character ] was expected for terminating the array.
                    // the object on the top of the stack is also the return value
                    ctxStack.getVector()->pop_back(); // return
                }
                else
                {
                    var arr = valueStack.getVector()->back();
                    if (arr.length() > 0)
                    {
                        if (str.getU16String()[c] == ',')
                        {
                            c++; // consume , and keep ctx stack
                        }
                        else
                        {
                            throw UnexpectedCharacterException(str.getU16String()[c], c);
                        }
                    }
                    changeState(ctxStack, GET_VALUE, valueStack);
                }
            }
            else if (level == 2) // read function return, expected stack [array, value]
            {
                var value = valueStack.getVector()->back();
                valueStack.getVector()->pop_back();
                var arr = valueStack.getVector()->back();
                arr += array(value);
            }
            else
            {
                throw std::runtime_error("illegal state: stack level on GET_ARRAY");
            }
        }
        else if (ctx[k_state] == GET_OBJECT)
        {
            if (level == 0) // call function
            {
                if (str.getU16String()[c] == '{')
                {
                    c++;
                    valueStack.getVector()->emplace_back();
                    changeState(ctxStack, GET_MEMBERS, valueStack);
                }
                else
                {
                    throw UnexpectedCharacterException(str.getU16String()[c], c);
                }
            }
            else if (level == 1) // read function return, expected level 1
            {
                // level 1 was expected
                if (str.getU16String()[c] == '}')
                {
                    c++;
                    // character } was expected for terminating the object.
                    // the object on the stop of the stack is also the return value
                    ctxStack.getVector()->pop_back(); // return
                }
                else
                {
                    throw UnexpectedCharacterException(str.getU16String()[c], c);
                }
            }
            else
            {
                throw std::runtime_error("illegal state: stack level on GET_OBJECT");
            }
        }
        else if (ctx[k_state] == GET_TRUE_FALSE_NULL)
        {
            int leftOverCharacters = (int)str.getU16String().size() - c;
            var token4 = std::u16string(str.getU16String(), c, std::min(4, leftOverCharacters));
            var token5 = std::u16string(str.getU16String(), c, std::min(5, leftOverCharacters));
            if (token4 == "true")
            {
                valueStack.getVector()->push_back(true);
                c += 4;
            }
            else if (token5 == "false")
            {
                valueStack.getVector()->push_back(false);
                c += 5;
            }
            else if (token4 == "null")
            {
                valueStack.getVector()->push_back(null());
                c += 4;
            }
            else
            {
                throw UnexpectedCharacterException(str.getU16String()[c], c);
            }
            ctxStack.getVector()->pop_back();
        }
        else if (ctx[k_state] == GET_NUMBER)
        {
            int beforeNumber = c;
            if (str.getU16String()[c] == '-')
            {
                c++;
            }

            int beforeDigits = c;
            consumeDigitsAtLeastOne(str, c, digitCS);

            // assert integer part does not start with zero, when larger than one character
            if (c - beforeDigits > 1 && str.getU16String()[beforeDigits] == '0')
            {
                throw UnexpectedCharacterException(str.getU16String()[beforeDigits], beforeDigits);
            }

            // fraction part
            if (str.getU16String()[c] == '.')
            {
                c++; // consume .
                consumeDigitsAtLeastOne(str, c, digitCS);
            }

            // exponent part
            if (str.getU16String()[c] == 'e' || str.getU16String()[c] == 'E')
            {
                c++; // consume e / E

                if (str.getU16String()[c] == '+' || str.getU16String()[c] == '-')
                {
                    c++; // consume + / -
                }
                consumeDigitsAtLeastOne(str, c, digitCS);
            }

            var token = std::u16string(str.getU16String(), beforeNumber, c - beforeNumber);
            valueStack.getVector()->push_back(token.toNumber());
            ctxStack.getVector()->pop_back();
        }
        else if (ctx[k_state] == GET_MEMBERS)
        {
            consumeWhiteSpaces(str, c);
            if (level == 0 && str.getU16String()[c] == '}')
            {
                ctxStack.getVector()->pop_back();
            }
            else if (level == 0) // call function
            {
                if (ctx[k_notEmpty])
                {
                    if (str.getU16String()[c] == ',')
                    {
                        c++;
                    }
                    else
                    {
                        throw UnexpectedCharacterException(str.getU16String()[c], c);
                    }
                }
                consumeWhiteSpaces(str, c);
                changeState(ctxStack, GET_STRING, valueStack);
            }
            else if (level == 1) // GET_STRING return, expected value stack [key]
            {
                consumeWhiteSpaces(str, c);
                if (str.getU16String()[c] == ':')
                {
                    c++;
                }
                else
                {
                    throw UnexpectedCharacterException(str.getU16String()[c], c);
                }
                changeState(ctxStack, GET_VALUE, valueStack);
            }
            else if (level == 2) // GET_VALUE return, expected value stack: [key, value]
            {
                var value = valueStack.getVector()->back();
                valueStack.getVector()->pop_back();
                var key = valueStack.getVector()->back();
                valueStack.getVector()->pop_back();
                var obj = valueStack.getVector()->back();
                obj[key] = value;
                ctx[k_notEmpty] = true;
            }
            else
            {
                throw std::runtime_error("illegal state: stack level on GET_MEMBERS");
            }
        }
        else if (ctx[k_state] == GET_STRING)
        {
            if (level == 0) // call function
            {
                if (str.getU16String()[c] == '\"')
                {
                    c++;
                    valueStack.getVector()->emplace_back(STRING);
                    changeState(ctxStack, GET_CHARACTERS, valueStack);
                }
                else
                {
                    throw UnexpectedCharacterException(str.getU16String()[c], c);
                }
            }
            else if (level == 1) // read function return, expected level 1
            {
                // level 1 was expected
                if (str.getU16String()[c] == '\"')
                {
                    c++;
                    // character " was expected for terminating the string.
                    // the string on the stop of the stack is also the return value
                    ctxStack.getVector()->pop_back(); // return
                }
                else
                {
                    throw UnexpectedCharacterException(str.getU16String()[c], c);
                }
            }
            else
            {
                throw std::runtime_error("illegal state: stack level on GET_STRING");
            }
        }
        else if (ctx[k_state] == GET_CHARACTERS)
        {
            int before;
            do
            {
                before = c;
                while (matchesCS(str, c, validCharCS))
                {
                    var &value = valueStack.getVector()->back();
                    std::u16string &valueStr = value.getU16String();
                    valueStr.append(std::u16string(1, str.getU16String()[c]));
                    c++;
                }
                if (str.getU16String()[c] == '\\')
                {
                    var &value = valueStack.getVector()->back();
                    std::u16string &valueStr = value.getU16String();
                    const char16_t &charToAdd = consumeAndGetEscapeSequence(str, c, hex_AF_CS, hex_af_CS, digitCS);
                    valueStr.append(std::u16string(1, charToAdd));
                }
            } while (c > before);

            ctxStack.getVector()->pop_back(); // return
        }
        else
        {
            throw std::runtime_error("illegal ctx state");
        }
    }
    throw std::runtime_error("illegal end of ctxState loop");
}

json::json()
{
    validCharCS = createCharacterSet("validChar", 0x20, 0x10FFFF, array('\"', '\\'));
    digitCS = createCharacterSet("digit", '0', '9', array());
    hex_AF_CS = createCharacterSet("hex_AF_CS", 'A', 'F', array());
    hex_af_CS = createCharacterSet("hex_af_CS", 'a', 'f', array());
}

json *json::getInstance()
{
    static json instance;
    return &instance;
}

var json::parse(const var &str)
{
    try
    {
        return json::getInstance()->parseCore(str);
    }
    catch (UnexpectedCharacterException &e)
    {
        if (e.getUnexpectedCharacter() == 0)
        {
            std::cerr << "Unexpected end of input at position " << e.getPosition() << std::endl;
        }
        else
        {
            std::cerr << "Unexpected token " << u16converter{}.to_bytes(e.getUnexpectedCharacter()) << " at position " << e.getPosition() << std::endl;
        }
    }
    catch (...)
    {
        std::cerr << "Unknown parse error." << std::endl;
    }
    throw std::runtime_error("JSON parse error.");
}

var json::stringify(const var &val)
{
    return val.toJSON();
}
