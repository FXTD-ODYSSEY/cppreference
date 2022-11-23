// cplusplus link https://cplusplus.com/reference/array\array\empty
// array::empty
#include <array>
#include <iostream>

int main()
{
    std::array<int, 0> first;
    std::array<int, 5> second;
    std::cout << "first " << (first.empty() ? "is empty" : "is not empty") << '\n';
    std::cout << "second " << (second.empty() ? "is empty" : "is not empty") << '\n';
    return 0;
}
