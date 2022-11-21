// cppreference link https://en.cppreference.com/w/cpp/io/basic_ostream/print
#include <array>
#include <cctype>
#include <format>
#include <iostream>
#include <numbers>
#include <ranges>

int main()
{
    std::array<char, 24> buf;
    std::format_to(buf.begin(), "{:.15f}", std::numbers::sqrt2);

    unsigned num {}, sum {};

    auto v = buf
        | std::views::filter(isdigit)
        | std::views::transform([](char x) { return x - '0'; })
        | std::views::take_while([&sum](char) { return sum < 42; });

    for (auto n : v) {
        sum += n;
        ++num;
    }

#ifdef __cpp_lib_print
    std::print(
        std::cout,
        "√2 = {}...\n"
        "The sum of its first {} digits is {}{}\n",
        std::numbers::sqrt2, num, sum, '.');
#else
    std::cout << std::format(
        "√2 = {}...\n"
        "The sum of its first {} digits is {}{}\n",
        std::numbers::sqrt2, num, sum, '.');
#endif
}
