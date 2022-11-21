// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/operator%3D
#include <iostream>
#include <string_view>
int main()
{
    std::string_view v = "Hello, world";
    v = v.substr(7);
    std::cout << v << '\n';
}
