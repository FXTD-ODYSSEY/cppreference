// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/max_size
#include <iostream>
#include <limits>
#include <string_view>

int main()
{
    std::cout
        << std::numeric_limits<std::int64_t>::max()
        << " <- numeric_limits<int64_t>::max()\n"
        << std::string_view {}.max_size()
        << " <- std::string_view::max_size()\n"
        << std::basic_string_view<char> {}.max_size()
        << " <- std::basic_string_view<char>::max_size()\n"
        << std::basic_string_view<char16_t> {}.max_size()
        << " <- std::basic_string_view<char16_t>::max_size()\n"
        << std::wstring_view {}.max_size()
        << " <- std::wstring_view::max_size()\n"
        << std::basic_string_view<char32_t> {}.max_size()
        << " <- std::basic_string_view<char32_t>::max_size()\n";
}
