// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/ends_with
#include <iostream>
#include <string_view>

int main()
{
    using namespace std::literals;

    std::cout
        << std::boolalpha

        // (1) bool ends_with( basic_string_view sv ) const noexcept;
        << std::string_view("https://cppreference.com").ends_with(".com"sv) << ' ' // true
        << std::string_view("https://cppreference.com").ends_with(".org"sv) << ' ' // false

        // (2) bool ends_with( CharT c ) const noexcept;
        << std::string_view("C++20").ends_with('0') << ' ' // true
        << std::string_view("C++20").ends_with('3') << ' ' // false

        // (3) bool ends_with( const CharT* s ) const;
        << std::string_view("string_view").ends_with("view") << ' ' // true
        << std::string_view("string_view").ends_with("View") << ' ' // false
        << '\n';
}
