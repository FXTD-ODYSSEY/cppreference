// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/upper_bound
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    namespace ranges = std::ranges;

    std::vector<int> data = { 1, 1, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 6 };

    {
        auto lower = ranges::lower_bound(data.begin(), data.end(), 4);
        auto upper = ranges::upper_bound(data.begin(), data.end(), 4);

        ranges::copy(lower, upper, std::ostream_iterator<int>(std::cout, " "));
        std::cout << '\n';
    }
    {
        auto lower = ranges::lower_bound(data, 3);
        auto upper = ranges::upper_bound(data, 3);

        ranges::copy(lower, upper, std::ostream_iterator<int>(std::cout, " "));
        std::cout << '\n';
    }
}
