// cppreference link https://en.cppreference.com/w/cpp/experimental/ostream_joiner
#include <algorithm>
#include <experimental/iterator>
#include <iostream>
#include <iterator>

int main()
{
    int i[] = { 1, 2, 3, 4, 5 };
    std::copy(std::begin(i),
        std::end(i),
        std::experimental::make_ostream_joiner(std::cout, ", "));
}
