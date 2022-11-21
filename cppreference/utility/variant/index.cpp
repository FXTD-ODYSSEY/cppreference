// cppreference link https://en.cppreference.com/w/cpp/utility/variant/index
#include <iostream>
#include <string>
#include <variant>
int main()
{
    std::variant<int, std::string> v = "abc";

    std::cout << "v.index = " << v.index() << '\n';

    v = {};

    std::cout << "v.index = " << v.index() << '\n';
}
