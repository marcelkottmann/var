#include "var.hpp"
#include "var-c.h"
#include <cstring>
#include <stdarg.h>

/**
 * Converts and copies str into utf-8 encoded c-styl string hold in buf if size of buf (given by len) is sufficient.
 */
char *convert(char *buf, size_t len, const std::u16string str)
{
    std::string result = u16converter{}.to_bytes(str);
    if (result.length() + 1 > len)
    {
        return NULL;
    }

    strncpy(buf, result.c_str(), result.length() + 1);
    return buf;
}

char *var_toJSON(char *buf, size_t len, void *varInstance)
{
    var *a = static_cast<var *>(varInstance);
    return convert(buf, len, a->toJSON().getU16String());
}

void *var_json_parse(char *json)
{
    return new var(json::parse(json));
}

void *var_getn(void *varInstance, int argc, ...)
{
    va_list vargp;
    va_start(vargp, argc);

    var *a = static_cast<var *>(varInstance);
    for (int i = 0; i < argc; i++)
    {
        char *key = va_arg(vargp, char *);
        a = &(*a)[key];
    }

    va_end(vargp);
    return a;
}

void *var_get(void *varInstance, char *key)
{
    return var_getn(varInstance, 1, key);
}

void *var_get2(void *varInstance, char *key1, char *key2)
{
    return var_getn(varInstance, 2, key1, key2);
}

void *var_get3(void *varInstance, char *key1, char *key2, char *key3)
{
    return var_getn(varInstance, 3, key1, key2, key3);
}

void *var_setn(void *varInstance, int argc, char *json, ...)
{
    va_list vargp;
    va_start(vargp, json);

    var *a = static_cast<var *>(varInstance);
    for (int i = 0; i < argc; i++)
    {
        char *key = va_arg(vargp, char *);
        if (isUndefined(*a))
        {
            *a = var();
        }
        a = &(*a)[key];
    }
    *a = json::parse(json);

    va_end(vargp);
    return a;
}

void *var_set(void *varInstance, char *key, char *json)
{
    return var_setn(varInstance, 1, json, key);
}

void *var_set2(void *varInstance, char *key1, char *key2, char *json)
{
    return var_setn(varInstance, 2, json, key1, key2);
}

void *var_set3(void *varInstance, char *key1, char *key2, char *key3, char *json)
{
    return var_setn(varInstance, 3, json, key1, key2, key3);
}

bool var_isUndefined(void *varInstance)
{
    var *a = static_cast<var *>(varInstance);
    return a->getType() == UNDEFINED;
}

bool var_toBool(void *varInstance)
{
    var *a = static_cast<var *>(varInstance);
    return bool(*a);
}

double var_toDouble(void *varInstance)
{
    var *a = static_cast<var *>(varInstance);
    return a->toNumber().getNumber();
}

char *var_toString(char *buf, size_t len, void *varInstance)
{
    var *a = static_cast<var *>(varInstance);
    return convert(buf, len, a->toString().getU16String());
}

void var_cleanup(void *varInstance)
{
    delete static_cast<var *>(varInstance);
}
