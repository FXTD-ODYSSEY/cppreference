// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/reverse_copy
#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string x { "12345" }, y(x.size(), ' ');
    std::cout << x << " → ";
    std::ranges::reverse_copy(x.begin(), x.end(), y.begin());
    std::cout << y << " → ";
    std::ranges::reverse_copy(y, x.begin());
    std::cout << x << '\n';
}
