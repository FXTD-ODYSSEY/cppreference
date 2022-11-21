// cppreference link https://en.cppreference.com/w/cpp/error/errc/make_error_condition
#include <iostream>
#include <string>
#include <system_error>

int main()
{
    auto err = std::make_error_condition(std::errc::invalid_argument);
    std::cout << err.message() << '\n';
}
