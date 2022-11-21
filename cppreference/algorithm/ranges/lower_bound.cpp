// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/lower_bound
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

namespace ranges = std::ranges;

template <std::forward_iterator I, std::sentinel_for<I> S, class T,
    class Proj = std::identity,
    std::indirect_strict_weak_order<
        const T*,
        std::projected<I, Proj>>
        Comp
    = ranges::less>
constexpr I binary_find(I first, S last, const T& value, Comp comp = {}, Proj proj = {})
{
    first = ranges::lower_bound(first, last, value, comp, proj);
    return first != last && !comp(value, proj(*first)) ? first : last;
}

int main()
{
    std::vector data = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5 };

    auto lower = ranges::lower_bound(data, 4);
    auto upper = ranges::upper_bound(data, 4);

    ranges::copy(lower, upper, std::ostream_iterator<int>(std::cout, " "));

    std::cout << '\n';

    // classic binary search, returning a value only if it is present

    data = { 1, 2, 4, 8, 16 };

    auto it = binary_find(data.cbegin(), data.cend(), 8); //< choosing '5' will return end()

    if (it != data.cend())
        std::cout << *it << " found at index " << ranges::distance(data.cbegin(), it);
}
