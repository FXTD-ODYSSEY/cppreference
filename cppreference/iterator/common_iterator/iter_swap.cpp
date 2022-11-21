// cppreference link https://en.cppreference.com/w/cpp/iterator/common_iterator/iter_swap
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> v1 { "1", "2", "3", "4", "5" },
        v2 { "α", "β", "γ", "δ", "ε" };

    using CI = std::common_iterator<
        std::counted_iterator<std::vector<std::string>::iterator>,
        std::default_sentinel_t>;

    CI first1 { std::counted_iterator { v1.begin(), 3 } };
    CI first2 { std::counted_iterator { v2.begin(), 4 } };
    CI last { std::default_sentinel };

    auto print = [&](auto rem) {
        std::cout << rem << "v1 = ";
        std::ranges::copy(v1, std::ostream_iterator<std::string> { std::cout, " " });
        std::cout << "\nv2 = ";
        std::ranges::copy(v2, std::ostream_iterator<std::string> { std::cout, " " });
        std::cout << '\n';
    };

    print("Before iter_swap:\n");

    for (; first1 != last && first2 != last; ++first1, ++first2) {
        iter_swap(first1, first2); // ADL
    }

    print("After iter_swap:\n");
}
