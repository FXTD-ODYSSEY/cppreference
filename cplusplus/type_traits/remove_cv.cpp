// cplusplus link https://cplusplus.com/reference/type_traits\remove_cv
// remove_cv example
#include <iostream>
#include <type_traits>

int main()
{
    typedef const volatile char cvchar;
    std::remove_cv<cvchar>::type a; // char a
    std::remove_cv<char* const>::type b; // char* b
    std::remove_cv<const char*>::type c; // const char* c (no changes)

    if (std::is_const<decltype(a)>::value)
        std::cout << "type of a is const" << std::endl;
    else
        std::cout << "type of a is not const" << std::endl;

    if (std::is_volatile<decltype(a)>::value)
        std::cout << "type of a is volatile" << std::endl;
    else
        std::cout << "type of a is not volatile" << std::endl;

    return 0;
}
