#ifndef _VAR_C_H
#define _VAR_C_H 1

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
#define EXTERNC extern "C"
#else
#define EXTERNC
#endif

EXTERNC char *var_toJSON(char *buf, size_t len, void *varInstance);
EXTERNC void *var_json_parse(char *buf);
EXTERNC void var_cleanup(void *varInstance);

EXTERNC void *var_get(void *varInstance, char *key);
EXTERNC void *var_get2(void *varInstance, char *key1, char *key2);
EXTERNC void *var_get3(void *varInstance, char *key1, char *key2, char *key3);
EXTERNC void *var_getn(void *varInstance, int n, ...);

EXTERNC void *var_set(void *varInstance, char *key, char *json);
EXTERNC void *var_set2(void *varInstance, char *key1, char *key2, char *json);
EXTERNC void *var_set3(void *varInstance, char *key1, char *key2, char *key3, char *json);
EXTERNC void *var_setn(void *varInstance, int n, char *json, ...);

EXTERNC bool var_isUndefined(void *varInstance);
EXTERNC bool var_toBool(void *varInstance);
EXTERNC double var_toDouble(void *varInstance);
EXTERNC char *var_toString(char *buf, size_t len, void *varInstance);

#undef EXTERNC

#endif
