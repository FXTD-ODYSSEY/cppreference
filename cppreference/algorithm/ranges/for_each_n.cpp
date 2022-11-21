// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/for_each_n
#include <algorithm>
#include <array>
#include <iostream>
#include <ranges>
#include <string_view>

struct P {
    int first;
    char second;
    friend std::ostream& operator<<(std::ostream& os, const P& p)
    {
        return os << '{' << p.first << ",'" << p.second << "'}";
    }
};

auto print = [](std::string_view name, auto const& v) {
    std::cout << name << ": ";
    for (auto n = v.size(); const auto& e : v) {
        std::cout << e << (--n ? ", " : "\n");
    }
};

int main()
{
    std::array a { 1, 2, 3, 4, 5 };
    print("a", a);
    // Negate first three numbers:
    std::ranges::for_each_n(a.begin(), 3, [](auto& n) { n *= -1; });
    print("a", a);

    std::array s { P { 1, 'a' }, P { 2, 'b' }, P { 3, 'c' }, P { 4, 'd' } };
    print("s", s);
    // Negate data members 'P::first' using projection:
    std::ranges::for_each_n(
        s.begin(), 2, [](auto& x) { x *= -1; }, &P::first);
    print("s", s);
    // Capitalize data members 'P::second' using projection:
    std::ranges::for_each_n(
        s.begin(), 3, [](auto& c) { c -= 'a' - 'A'; }, &P::second);
    print("s", s);
}
