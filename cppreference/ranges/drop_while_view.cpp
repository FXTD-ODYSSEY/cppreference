// cppreference link https://en.cppreference.com/w/cpp/ranges/drop_while_view
#include <iomanip>
#include <iostream>
#include <ranges>
#include <string>
#include <string_view>

using std::operator""sv;

[[nodiscard]] constexpr bool is_space(char ch) noexcept
{
    switch (ch) {
    case ' ':
    case '\t':
    case '\n':
    case '\v':
    case '\r':
    case '\f':
        return true;
    }
    return false;
};

[[nodiscard]] constexpr std::string_view trim_left(std::string_view const in) noexcept
{
    return in | std::views::drop_while(is_space);
}

[[nodiscard]] std::string trim(std::string_view const in)
{
    auto view
        = in
        | std::views::drop_while(is_space)
        | std::views::reverse
        | std::views::drop_while(is_space)
        | std::views::reverse;
    return { view.begin(), view.end() };
}

int main()
{
    static_assert(trim_left(" \n C++23") == "C++23"sv);

    const auto s = trim(" \f\n\t\r\vHello, C++20!\f\n\t\r\v ");
    std::cout << "s = " << std::quoted(s) << '\n';

    static constexpr auto v = { 0, 1, 2, 3, 4, 5 };
    for (int n : v | std::views::drop_while([](int i) { return i < 3; }))
        std::cout << n << ' ';
}
