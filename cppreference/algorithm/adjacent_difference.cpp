// cppreference link https://en.cppreference.com/w/cpp/algorithm/adjacent_difference
#include <array>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

auto print = [](auto comment, auto const& sequence) {
    std::cout << comment;
    for (const auto& n : sequence)
        std::cout << n << ' ';
    std::cout << '\n';
};

int main()
{
    // Default implementation - the difference b/w two adjacent items

    std::vector v { 4, 6, 9, 13, 18, 19, 19, 15, 10 };
    print("Initially, v = ", v);
    std::adjacent_difference(v.begin(), v.end(), v.begin());
    print("Modified v = ", v);

    // Fibonacci

    std::array<int, 10> a { 1 };
    adjacent_difference(begin(a), std::prev(end(a)), std::next(begin(a)), std::plus<> {});
    print("Fibonacci, a = ", a);
}
