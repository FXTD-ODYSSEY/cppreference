// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/swap
#include <iostream>
#include <string>

int main()
{
    std::string a = "AAA";
    std::string b = "BBB";

    std::cout << "before swap" << '\n';
    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';

    a.swap(b);

    std::cout << "after swap" << '\n';
    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';
}
