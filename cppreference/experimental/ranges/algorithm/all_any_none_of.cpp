// cppreference link https://en.cppreference.com/w/cpp/experimental/ranges/algorithm/all_any_none_of
#include <experimental/ranges/algorithm>
#include <experimental/ranges/iterator>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

namespace ranges = std::experimental::ranges;

int main()
{
    std::vector<int> v(10, 2);
    std::partial_sum(v.cbegin(), v.cend(), v.begin());
    std::cout << "Among the numbers: ";
    ranges::copy(v, ranges::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';

    if (ranges::all_of(v.cbegin(), v.cend(), [](int i) { return i % 2 == 0; })) {
        std::cout << "All numbers are even\n";
    }
    if (ranges::none_of(v, std::bind(std::modulus<int>(), std::placeholders::_1, 2))) {
        std::cout << "None of them are odd\n";
    }
    struct DivisibleBy {
        const int d;
        DivisibleBy(int n)
            : d(n)
        {
        }
        bool operator()(int n) const { return n % d == 0; }
    };

    if (ranges::any_of(v, DivisibleBy(7))) {
        std::cout << "At least one number is divisible by 7\n";
    }
}
