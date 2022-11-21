// cppreference link https://en.cppreference.com/w/cpp/iterator/ostream_iterator
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>

int main()
{
    std::istringstream str("0.1 0.2 0.3 0.4");
    std::partial_sum(std::istream_iterator<double>(str),
        std::istream_iterator<double>(),
        std::ostream_iterator<double>(std::cout, ","));
}
