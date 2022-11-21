// cppreference link https://en.cppreference.com/w/cpp/utility/variant/valueless_by_exception
#include <cassert>
#include <iostream>
#include <stdexcept>
#include <string>
#include <variant>

struct Demo {
    Demo(int) { }
    Demo(const Demo&) { throw std::domain_error("copy ctor"); }
    Demo& operator=(const Demo&) = default;
};

int main()
{
    std::variant<std::string, Demo> var { "str" };
    assert(var.index() == 0);
    assert(std::get<0>(var) == "str");
    assert(var.valueless_by_exception() == false);

    try {
        var = Demo { 555 };
    } catch (const std::domain_error& ex) {
        std::cout << "1) Exception: " << ex.what() << '\n';
    }
    assert(var.index() == std::variant_npos);
    assert(var.valueless_by_exception() == true);

    // Now the var is "valueless" which is an invalid state caused
    // by an exception raised in the process of type-changing assignment.

    try {
        std::get<1>(var);
    } catch (const std::bad_variant_access& ex) {
        std::cout << "2) Exception: " << ex.what() << '\n';
    }

    var = "str2";
    assert(var.index() == 0);
    assert(std::get<0>(var) == "str2");
    assert(var.valueless_by_exception() == false);
}
