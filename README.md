# var

_var_ is a lightweight and pragmatic json parser and serializer combined with a JavaScript-like wrapper for objects, strings, arrays, numbers and booleans.

## Focus

- An easy to use API
- Parsing follows original [json grammar](https://json.org)
- Parsing is non-recursive
- Passing all tests of [JSONTestSuite](https://github.com/nst/JSONTestSuite/tree/master/test_parsing)
- JavaScript-like wrapper for objects, strings, arrays, numbers and booleans (and undefined). 
- Pure RAII, no `new` or `malloc` usage in codebase.
- C++11

## Getting started examples

### Parsing

```C++
var a = json::parseJSON(R"({"name":"Joe"})");

std::cout << a["name"] << std::endl;
```

This code snippet will just print

`Joe`.

### Serializing

```C++
var a = json::parse(R"({"name":"Joe"})");
a["books"] = array("C++", "JavaScript");

std::cout << a.toJSON() << std::endl;
```

This code snippet will print

`{"books":["C++","JavaScript"],"name":"Joe"}`.

## Operators on wrapper type `var`

### operator+

```
var c = a + b
```

| a                | b                | c                                                                         |
| ---------------- | ---------------- | ------------------------------------------------------------------------- |
| ARRAY            | ARRAY            | ARRAY: concat a and b ??                                                  |
| OBJECT           | OBJECT           | OBJECT: merge all keys of a and b. keys of b overwrite existing keys of a |
| ARRAY            | any              | ARRAY: add b to end of a                                                  |
| NUMBER / BOOLEAN | NUMBER / BOOLEAN | NUMBER: normal addition                                                   |
| any              | any              | STRING: string concatenation of toString()                                |

See [Generated operator markdown](./docs/operator_result.md) for a generated table of example operator results.

### operator+=

```
a += b
```

| a                | b                | a after operation                                                         |
| ---------------- | ---------------- | ------------------------------------------------------------------------- |
| ARRAY            | ARRAY            | ARRAY: concat a and b                                                     |
| OBJECT           | OBJECT           | OBJECT: merge all keys of a and b. keys of b overwrite existing keys of a |
| ARRAY            | any              | ARRAY: add b to end of a                                                  |
| NUMBER / BOOLEAN | NUMBER / BOOLEAN | NUMBER: normal addition                                                   |
| STRING           | any              | STRING: string concatenation of toString()                                |
| any              | any              | Other combination lead to a `std::runtime_error` exception.               |

See [Generated operator markdown](./docs/operator_result.md) for a generated table of example operator results.

### operator-

```
var c = a - b
```

| a              | b                | c                                                             |
| -------------- | ---------------- | ------------------------------------------------------------- |
| ARRAY          | ARRAY            | ARRAY: remove all items from a which are also contained in b  |
| OBJECT         | OBJECT           | OBJECT: remove all keys from a, which are also contained in b |
| ARRAY          | any              | ARRAY: remove items that equal b from array a (WIP)           |
| NUMBER/BOOLEAN | NUMBER / BOOLEAN | NUMBER: normal substraction (WIP)                             |
| any            | any              | Other combination lead to a `std::runtime_error` exception.   |

See [Generated operator markdown](./docs/operator_result.md) for a generated table of example operator results.

### operator/

```
var c = a / b
```

| a              | b                | c                                                                     |
| -------------- | ---------------- | --------------------------------------------------------------------- |
| ARRAY          | ARRAY            | ARRAY: intersection of arrays a and b                                 |
| OBJECT         | OBJECT           | OBJECT: intersection of keys of a and b                               |
| ARRAY          | NUMBER           | ARRAY: remove b items from end of array (from start if b is negative) |
| NUMBER/BOOLEAN | NUMBER / BOOLEAN | NUMBER: normal division (WIP)                                         |
| any            | any              | Other combination lead to a `std::runtime_error` exception.           |

See [Generated operator markdown](./docs/operator_result.md) for a generated table of example operator results.

### operator/=

```
a /= b
```

| a              | b                | a after operation                                                     |
| -------------- | ---------------- | --------------------------------------------------------------------- |
| ARRAY          | ARRAY            | ARRAY: intersection of arrays a and b                                 |
| OBJECT         | OBJECT           | OBJECT: intersection of keys of a and b                               |
| ARRAY          | NUMBER           | ARRAY: remove b items from end of array (from start if b is negative) |
| NUMBER/BOOLEAN | NUMBER / BOOLEAN | NUMBER: normal division (WIP)                                         |
| any            | any              | Other combination lead to a `std::runtime_error` exception.           |

See [Generated operator markdown](./docs/operator_result.md) for a generated table of example operator results.

## Add to external project

Copy `var.hpp` and `var.cpp` in your project. Create `example.cpp`:

```C++
// example.cpp
#include "var.hpp"

int main()
{
    var a;
    a["text"] = "Hello";

    var b = 1;
    a["num"] = b;

    std::cout << a.toJSON() << std::endl;
}
```
Build directly with installed compiler, e.g. g++ :
```shell
g++ example.cpp var.cpp
```

## Build with provided run.sh
The project caontains a script named `run.sh`. See all options by executing
```shell
./run.sh help
```

### Build libs and provided example

```shell
./run.sh build
```

### Run provides examples

C++ example:
```shell
./run.sh example cpp
```

C example:
```shell
./run.sh example c
```

### Run the tests

```shell
./run.sh test
```

### Generate operator tests

```shell
./run.sh generate-tests
```

### Generate operator markdown documentation

```shell
./run.sh generate-markdown
```

### Clean build directory

```shell
./run.sh clean
```