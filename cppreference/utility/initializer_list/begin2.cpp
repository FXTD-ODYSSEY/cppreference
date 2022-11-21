// cppreference link https://en.cppreference.com/w/cpp/utility/initializer_list/begin2
#include <algorithm>
#include <initializer_list>
#include <iostream>
#include <iterator>

int main()
{
    std::initializer_list il = { 3, 1, 4, 1 };

    std::copy(std::begin(il),
        std::end(il),
        std::ostream_iterator<int>(std::cout, "\n"));
}
