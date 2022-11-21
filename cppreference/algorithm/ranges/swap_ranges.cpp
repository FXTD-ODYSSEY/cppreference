// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/swap_ranges
#include <algorithm>
#include <iostream>
#include <list>
#include <string_view>
#include <vector>

auto print(std::string_view name, auto const& seq, std::string_view term = "\n")
{
    std::cout << name << ": ";
    for (const auto& elem : seq)
        std::cout << elem << ' ';
    std::cout << term;
}

int main()
{
    std::vector<char> p { 'A', 'B', 'C', 'D', 'E' };
    std::list<char> q { '1', '2', '3', '4', '5', '6' };

    print("p", p);
    print("q", q, "\n\n");

    // swap p[0, 2) and q[1, 3):
    std::ranges::swap_ranges(p.begin(),
        p.begin() + 4,
        std::ranges::next(q.begin(), 1),
        std::ranges::next(q.begin(), 3));
    print("p", p);
    print("q", q, "\n\n");

    // swap p[0, 5) and q[0, 5):
    std::ranges::swap_ranges(p, q);

    print("p", p);
    print("q", q);
}
