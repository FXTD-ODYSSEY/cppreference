// cplusplus link https://cplusplus.com/reference/array\array\back
// array::back
#include <array>
#include <iostream>

int main()
{
    std::array<int, 3> myarray = { 5, 19, 77 };

    std::cout << "front is: " << myarray.front() << std::endl; // 5
    std::cout << "back is: " << myarray.back() << std::endl; // 77

    myarray.back() = 50;

    std::cout << "myarray now contains:";
    for (int& x : myarray)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
