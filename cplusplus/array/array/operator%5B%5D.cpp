// cplusplus link https://cplusplus.com/reference/array\array\operator%5B%5D
// array::operator[]
#include <array>
#include <iostream>

int main()
{
    std::array<int, 10> myarray;
    unsigned int i;

    // assign some values:
    for (i = 0; i < 10; i++)
        myarray[i] = i;

    // print content
    std::cout << "myarray contains:";
    for (i = 0; i < 10; i++)
        std::cout << ' ' << myarray[i];
    std::cout << '\n';

    return 0;
}
