// cppreference link https://en.cppreference.com/w/cpp/ranges/subrange/advance
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <ranges>

void print(auto name, auto const sub)
{
    std::cout << name << ".size() == " << sub.size() << "; { ";
    std::ranges::for_each(sub, [](int x) { std::cout << x << ' '; });
    std::cout << "}\n";
};

int main()
{
    std::array arr { 1, 2, 3, 4, 5, 6, 7 };
    std::ranges::subrange sub { std::next(arr.begin()), std::prev(arr.end()) };
    print("1) sub", sub);
    print("2) sub", sub.advance(3));
    print("3) sub", sub.advance(-2));
}
