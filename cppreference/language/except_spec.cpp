// cppreference link https://en.cppreference.com/w/cpp/language/except_spec
#include <cstdlib>
#include <exception>
#include <iostream>

static_assert(__cplusplus < 201700,
    "ISO C++17 does not allow dynamic exception specifications.");

class X { };
class Y { };
class Z : public X { };
class W { };

void f() throw(X, Y)
{
    int n = 0;
    if (n)
        throw X(); // OK
    if (n)
        throw Z(); // also OK
    throw W(); // will call std::unexpected()
}

int main()
{
    std::set_unexpected([] {
        std::cout << "That was unexpected!" << std::endl; // flush needed
        std::abort();
    });
    f();
}
