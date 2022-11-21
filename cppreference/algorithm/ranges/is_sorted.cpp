// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/is_sorted
#include <algorithm>
#include <iostream>
#include <iterator>

int main()
{
    namespace ranges = std::ranges;

    std::array digits { 3, 1, 4, 1, 5 };

    ranges::copy(digits, std::ostream_iterator<int>(std::cout, " "));
    std::cout << ": is_sorted: " << std::boolalpha
              << ranges::is_sorted(digits) << '\n';

    ranges::sort(digits);

    ranges::copy(digits, std::ostream_iterator<int>(std::cout, " "));
    std::cout << ": is_sorted: "
              << ranges::is_sorted(ranges::begin(digits),
                     ranges::end(digits))
              << '\n';
}
