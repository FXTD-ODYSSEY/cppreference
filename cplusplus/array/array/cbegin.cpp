// cplusplus link https://cplusplus.com/reference/array\array\cbegin
// array::cbegin example
#include <array>
#include <iostream>

int main()
{
    std::array<int, 5> myarray = { 2, 16, 77, 34, 50 };

    std::cout << "myarray contains:";

    for (auto it = myarray.cbegin(); it != myarray.cend(); ++it)
        std::cout << ' ' << *it; // cannot modify *it

    std::cout << '\n';

    return 0;
}
