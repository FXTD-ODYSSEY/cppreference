// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/swap2
#include <iostream>
#include <string>

int main()
{
    std::string a = "AAAA";
    std::string b = "BBB";

    std::cout << "before swap" << '\n';
    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';

    std::swap(a, b);

    std::cout << "after swap" << '\n';
    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';
}
