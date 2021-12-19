#include "var-c.h"
#include <stdio.h>

int main()
{
    enum { LEN = 256 };
    char buf[LEN];

    void *val = var_json_parse("{\"bool\":true,\"num\":1.234,\"str\":\"demo text\"}");

    printf("toJSON: %s\n", var_toJSON(buf, LEN, val));

    printf("bool toBool: %d\n", var_toBool(var_get(val, "bool")));
    printf("bool toString: %s\n", var_toString(buf, LEN, var_get(val, "bool")));
    printf("bool toDouble: %f\n", var_toDouble(var_get(val, "bool")));

    printf("num toDouble: %f\n", var_toDouble(var_get(val, "num")));
    printf("num toString: %s\n", var_toString(buf, LEN, var_get(val, "num")));
    printf("num toBool: %d\n", var_toBool(var_get(val, "num")));

    printf("str toString: %s\n", var_toString(buf, LEN, var_get(val, "str")));
    printf("str toDouble: %f\n", var_toDouble(var_get(val, "str")));
    printf("str toBool: %d\n", var_toBool(var_get(val, "str")));

    var_set(val, "new", "{\"prop\":123}");
    printf("toJSON: %s\n", var_toJSON(buf, LEN, val));

    var_set3(val, "new", "prop2", "helo", "4");
    printf("toJSON: %s\n", var_toJSON(buf, LEN, val));

    var_cleanup(val);

    // {}
}
