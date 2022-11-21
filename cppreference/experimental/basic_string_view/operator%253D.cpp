// cppreference link https://en.cppreference.com/w/cpp/experimental/basic_string_view/operator%3D
#include <experimental/string_view>
#include <iostream>
int main()
{
    std::experimental::string_view v = "Hello, world";
    v = v.substr(7);
    std::cout << v << '\n';
}
