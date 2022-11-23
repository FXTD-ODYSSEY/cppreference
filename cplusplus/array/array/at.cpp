// cplusplus link https://cplusplus.com/reference/array\array\at
// array::at
#include <array>
#include <iostream>

int main()
{
    std::array<int, 10> myarray;

    // assign some values:
    for (int i = 0; i < 10; i++)
        myarray.at(i) = i + 1;

    // print content:
    std::cout << "myarray contains:";
    for (int i = 0; i < 10; i++)
        std::cout << ' ' << myarray.at(i);
    std::cout << '\n';

    return 0;
}
