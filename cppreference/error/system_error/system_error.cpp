// cppreference link https://en.cppreference.com/w/cpp/error/system_error/system_error
#include <iostream>
#include <system_error>

int main()
{
    try {
        throw std::system_error(EDOM, std::generic_category(), "hello world");
    } catch (const std::system_error& ex) {
        std::cout << ex.code() << '\n';
        std::cout << ex.code().message() << '\n';
        std::cout << ex.what() << '\n';
    }
}
