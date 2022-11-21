// cppreference link https://en.cppreference.com/w/cpp/ranges/slide_view/begin
#include <iostream>
#include <ranges>
#include <string_view>
using namespace std::literals;

int main()
{
    static constexpr auto source = { "∀x"sv, "∃y"sv, "ε"sv, "δ"sv };
    auto view { std::ranges::slide_view(source, 2) };
    const auto subrange { *(view.begin()) };
    for (std::string_view const s : subrange)
        std::cout << s << ' ';
}
