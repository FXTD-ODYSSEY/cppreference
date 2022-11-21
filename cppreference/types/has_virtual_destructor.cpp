// cppreference link https://en.cppreference.com/w/cpp/types/has_virtual_destructor
#include <iostream>
#include <stdexcept>
#include <string>
#include <type_traits>

int main()
{
    std::cout << std::boolalpha
              << "std::string has a virtual destructor? "
              << std::has_virtual_destructor<std::string>::value << '\n'
              << "std::runtime_error has a virtual destructor? "
              << std::has_virtual_destructor<std::runtime_error>::value << '\n';
}
