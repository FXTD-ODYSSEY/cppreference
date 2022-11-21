// cppreference link https://en.cppreference.com/w/cpp/language/union
#include <iostream>
#include <variant>

int main()
{
    std::variant<char, int, double> s = 'a';
    std::visit([](auto x) { std::cout << x << '\n'; }, s);
    s = 123;
    std::visit([](auto x) { std::cout << x << '\n'; }, s);
}
