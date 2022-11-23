// cplusplus link https://cplusplus.com/reference/array\array\rend
// array::rbegin/rend
#include <array>
#include <iostream>

int main()
{
    std::array<int, 4> myarray = { 4, 26, 80, 14 };

    std::cout << "myarray contains:";
    for (auto rit = myarray.rbegin(); rit < myarray.rend(); ++rit)
        std::cout << ' ' << *rit;

    std::cout << '\n';

    return 0;
}
