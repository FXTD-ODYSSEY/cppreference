// cppreference link https://en.cppreference.com/w/cpp/iterator/istream_iterator/istream_iterator
#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
int main()
{
    std::istringstream stream("1 2 3 4 5");
    std::copy(
        std::istream_iterator<int>(stream),
        std::istream_iterator<int>(),
        std::ostream_iterator<int>(std::cout, " "));
}
