// cplusplus link https://cplusplus.com/reference/array\array\fill
// array::fill example
#include <array>
#include <iostream>

int main()
{
    std::array<int, 6> myarray;

    myarray.fill(5);

    std::cout << "myarray contains:";
    for (int& x : myarray) {
        std::cout << ' ' << x;
    }

    std::cout << '\n';

    return 0;
}
