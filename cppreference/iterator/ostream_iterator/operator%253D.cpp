// cppreference link https://en.cppreference.com/w/cpp/iterator/ostream_iterator/operator%3D
#include <iostream>
#include <iterator>

int main()
{
    std::ostream_iterator<int> i1(std::cout, ", ");
    *i1++ = 1; // usual form, used by standard algorithms
    *++i1 = 2;
    i1 = 3; // neither * nor ++ are necessary
    std::ostream_iterator<double> i2(std::cout);
    i2 = 3.14;
}
