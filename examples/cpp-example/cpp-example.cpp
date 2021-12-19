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