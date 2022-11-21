// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/swap
#include <iostream>
#include <string_view>

int main()
{
    auto s1 { std::string_view { "⏺⏺⏺⏺⏺" } };
    auto s2 { std::string_view { "⏹⏹⏹⏹⏹" } };

    std::cout << "Before: " << s1 << ' ' << s2 << "\n";
    s1.swap(s2);
    std::cout << "After : " << s1 << ' ' << s2 << "\n";
}
