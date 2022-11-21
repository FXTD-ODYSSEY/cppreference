// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/minmax_element
#include <algorithm>
#include <iostream>
#include <iterator>
namespace rng = std::ranges;

int main()
{
    const auto v = { 3, 9, 1, 4, 1, 2, 5, 9 };
    const auto [min, max] = rng::minmax_element(v);
    std::cout
        << "min = " << *min << ", at [" << rng::distance(v.begin(), min) << "]\n"
        << "max = " << *max << ", at [" << rng::distance(v.begin(), max) << "]\n";
}
