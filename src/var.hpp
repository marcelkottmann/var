#ifndef _VAR_H
#define _VAR_H 1

#include <string>
#include <map>
#include <memory>
#include <iostream>
#include <vector>
#include <codecvt>
#include <locale>
#include <cmath>

//forward declaration because of cyclic dependency in objectvar and var
class objectvar;

enum vartype
{
    UNDEFINED,
    STRING,
    NUMBER,
    OBJECT,
    ARRAY,
    BOOLEAN
};

// shortcut to convert string to u16string and vice versa
class u16converter : public std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t>
{
};

class var
{
    friend objectvar;

private:
    vartype type = vartype::UNDEFINED;
    std::u16string str;
    double number = 0;
    std::shared_ptr<objectvar> dc; // maybe a shared_ptr pointing to NULL (nor null() - objects)
    std::shared_ptr<std::vector<var>> arr;
    bool autoUndefined = false;
    void performArrayOperation(bool differenceOrIntersection, var &target, const var &other) const;
    void performObjectOperation(bool differenceOrIntersection, var &target, const var &b) const;

public:
    var();
    var(const var &other); // copy constructor
    var(var &&other);      // move constructor
    var(const char *value);
    var(const std::string &value);
    var(const char16_t *value);
    var(const std::u16string &value);
    var(double value);
    var(int value);
    var(std::shared_ptr<objectvar> value);
    var(vartype type);
    var(const std::shared_ptr<std::vector<var>> value);
    var(bool value);

    var keys();

    var &get(const var &key);

    // provide iterators to allow for-each-loops
    std::vector<var>::iterator begin();
    std::vector<var>::iterator end();

    // native access to wrapped instance
    std::shared_ptr<std::vector<var>> getVector();
    std::shared_ptr<std::vector<var>> getVector() const;
    std::u16string &getU16String();
    const std::u16string &getU16String() const;
    double getNumber() const;

    var toString() const;
    var toJSON() const;
    var toNumber() const;
    var toCode() const;

    var length() const;

    vartype getType() const;

    var operator+(const var &other) const;
    var operator-(const var &other);
    var operator/(const var &other);

    var &operator+=(const var &other);
    var &operator-=(const var &other);
    var &operator/=(const var &other);

    var &operator=(const var &) = default;

    bool operator==(const var &other) const;
    bool operator!=(const var &other) const;
    var &operator[](const var &v);
    bool operator!() const;
    bool operator<(const var &v);
    bool operator>(const var &v);
    bool operator>=(const var &v);
    bool operator<=(const var &v);
    var &operator++();
    var operator++(int);
    var &operator--();
    var operator--(int);
    explicit operator bool() const;
};

class objectvar
{
    friend var;

private:
    mutable std::map<std::u16string, var> data;
    mutable bool needsUndefinedCleanup = false;

    void performUndefinedCleanup() const;

public:
    objectvar();
    objectvar(const objectvar &other);
    objectvar(const objectvar &&other);

    var &get(const var &key) const;

    var keys() const;
    var length() const;

    var toString() const;
    var toJSON() const;
    bool operator==(const objectvar &other) const;
};

// operators
std::ostream &operator<<(std::ostream &cout, const var &obj);
var operator+(const char *str, const var &other);
var operator+(const std::string &str, const var &other);
var operator+(const std::u16string &str, const var &other);
var operator+(const double number, const var &other);
var operator-(const char *str, const var &other);
var operator-(const std::string &str, const var &other);
var operator-(const std::u16string &str, const var &other);
var operator-(const double number, const var &other);

template <typename... V>
inline var array(const V &...rest)
{
    return var(std::make_shared<std::vector<var>>(std::initializer_list<var>{rest...}));
}

inline var null()
{
    return var(std::shared_ptr<objectvar>()); // shared_ptr pointing to NULL
}

inline var undefined()
{
    return var(vartype::UNDEFINED);
}

inline bool isUndefined(const var &val)
{
    return val.getType() == UNDEFINED;
}

inline bool isNaN(const var &num)
{
    if (num.getType() == NUMBER)
    {
        return std::isnan(num.getNumber());
    }
    return false;
}

inline bool isInfinity(const var &num)
{
    if (num.getType() == NUMBER)
    {
        return std::isinf(num.getNumber());
    }
    return false;
}
class json
{

private:
    json();
    var validCharCS;
    var digitCS;
    var hex_AF_CS;
    var hex_af_CS;
    var parseCore(const var &str);
    static json *getInstance();
    json(const json &other) = delete;

public:
    static var parse(const var &str);
    static var stringify(const var &val);
};

#endif