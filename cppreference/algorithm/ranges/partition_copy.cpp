// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/partition_copy
#include <algorithm>
#include <cctype>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    const auto in = { 'N', '3', 'U', 'M', '1', 'B', '4', 'E', '1', '5', 'R', '9' };

    std::vector<int> o1(size(in)), o2(size(in));

    auto pred = [](char c) { return std::isalpha(c); };

    auto ret = std::ranges::partition_copy(in, o1.begin(), o2.begin(), pred);

    std::ostream_iterator<char> cout { std::cout, " " };
    std::cout << "in = ";
    std::ranges::copy(in, cout);
    std::cout << "\no1 = ";
    std::copy(o1.begin(), ret.out1, cout);
    std::cout << "\no2 = ";
    std::copy(o2.begin(), ret.out2, cout);
    std::cout << '\n';
}
