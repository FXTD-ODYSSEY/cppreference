// cplusplus link https://cplusplus.com/reference/array\array\begin
// array::begin example
#include <array>
#include <iostream>

int main()
{
    std::array<int, 5> myarray = { 2, 16, 77, 34, 50 };

    std::cout << "myarray contains:";
    for (auto it = myarray.begin(); it != myarray.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
