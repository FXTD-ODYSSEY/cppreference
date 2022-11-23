// cplusplus link https://cplusplus.com/reference/array\array\cend
// array::cend example
#include <array>
#include <iostream>

int main()
{
    std::array<int, 5> myarray = { 15, 720, 801, 1002, 3502 };

    std::cout << "myarray contains:";
    for (auto it = myarray.cbegin(); it != myarray.cend(); ++it)
        std::cout << ' ' << *it; // cannot modify *it

    std::cout << '\n';

    return 0;
}
