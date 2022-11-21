// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/next_permutation
#include <algorithm>
#include <array>
#include <compare>
#include <functional>
#include <iostream>
#include <string>

struct S {
    char c;
    int i;
    auto operator<=>(const S&) const = default;
    friend std::ostream& operator<<(std::ostream& os, const S& s)
    {
        return os << "{'" << s.c << "', " << s.i << "}";
    }
};

auto print = [](auto const& v, char term = ' ') {
    std::cout << "{ ";
    for (const auto& e : v) {
        std::cout << e << ' ';
    }
    std::cout << '}' << term;
};

int main()
{
    std::cout << "Generate all permutations (iterators case):\n";
    std::string s { "abc" };
    do {
        print(s);
    } while (std::ranges::next_permutation(s.begin(), s.end()).found);

    std::cout << "\n"
                 "Generate all permutations (range case):\n";
    std::array a { 'a', 'b', 'c' };
    do {
        print(a);
    } while (std::ranges::next_permutation(a).found);

    std::cout << "\n"
                 "Generate all permutations using comparator:\n";
    using namespace std::literals;
    std::array z { "█"s, "▄"s, "▁"s };
    do {
        print(z);
    } while (std::ranges::next_permutation(z, std::greater()).found);

    std::cout << "\n"
                 "Generate all permutations using projection:\n";
    std::array<S, 3> r { S { 'A', 3 }, S { 'B', 2 }, S { 'C', 1 } };
    do {
        print(r, '\n');
    } while (std::ranges::next_permutation(r, {}, &S::c).found);
}
