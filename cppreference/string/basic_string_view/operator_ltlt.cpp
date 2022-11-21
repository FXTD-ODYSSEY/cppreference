// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/operator_ltlt
#include <iomanip>
#include <iostream>
#include <string_view>

int main()
{
    constexpr std::string_view s { "abc" };
    constexpr int width { 5 };
    constexpr char fill { '-' };

    std::cout
        << std::setfill(fill)
        << "[" << s << "]\n"
        << "[" << std::left << std::setw(width) << s << "]\n"
        << "[" << std::right << std::setw(width) << s << "]\n";
}
