// cplusplus link https://cplusplus.com/reference/array\array\front
// array::front
#include <array>
#include <iostream>

int main()
{
    std::array<int, 3> myarray = { 2, 16, 77 };

    std::cout << "front is: " << myarray.front() << std::endl; // 2
    std::cout << "back is: " << myarray.back() << std::endl; // 77

    myarray.front() = 100;

    std::cout << "myarray now contains:";
    for (int& x : myarray)
        std::cout << ' ' << x;

    std::cout << '\n';

    return 0;
}
