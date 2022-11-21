// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/contains
#include <iostream>
#include <string_view>

auto main() -> int
{
    using namespace std::literals;

    std::cout
        << std::boolalpha

        // bool contains(basic_string_view x) const noexcept;
        << "https://cppreference.com"sv.contains("cpp"sv) << ' ' // true
        << "https://cppreference.com"sv.contains("java"sv) << ' ' // false

        // bool contains(CharT x) const noexcept;
        << "C++23"sv.contains('+') << ' ' // true
        << "C++23"sv.contains('-') << ' ' // false

        // bool contains(const CharT* x) const;
        << std::string_view("basic_string_view").contains("string") << ' ' // true
        << std::string_view("basic_string_view").contains("String") << ' ' // false
        << '\n';
}
