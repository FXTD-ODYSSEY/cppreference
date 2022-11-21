// cppreference link https://en.cppreference.com/w/cpp/utility/to_chars
#include <array>
#include <charconv>
#include <iostream>
#include <string_view>
#include <system_error>

void show_to_chars(auto... format_args)
{
    std::array<char, 10> str;

    if (auto [ptr, ec] = std::to_chars(str.data(), str.data() + str.size(), format_args...);
        ec == std::errc()) {
        std::cout << std::string_view(str.data(), ptr) << '\n';
        //  (str.data(), ptr - str.data()) // C++17 alt, using string_view(ptr, length)
    } else {
        std::cout << std::make_error_code(ec).message() << '\n';
    }
}

int main()
{
    show_to_chars(42);
    show_to_chars(+3.14159F);
    show_to_chars(-3.14159, std::chars_format::fixed);
    show_to_chars(-3.14159, std::chars_format::scientific, 3);
    show_to_chars(3.1415926535, std::chars_format::fixed, 10);
}
