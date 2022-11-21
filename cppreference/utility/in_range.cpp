// cppreference link https://en.cppreference.com/w/cpp/utility/in_range
#include <iostream>
#include <utility>

int main()
{
    std::cout << std::boolalpha;

    std::cout << std::in_range<std::size_t>(-1) << '\n';
    std::cout << std::in_range<std::size_t>(42) << '\n';
}
