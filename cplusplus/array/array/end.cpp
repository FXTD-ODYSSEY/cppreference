// cplusplus link https://cplusplus.com/reference/array\array\end
// array::end example
#include <array>
#include <iostream>

int main()
{
    std::array<int, 5> myarray = { 5, 19, 77, 34, 99 };

    std::cout << "myarray contains:";
    for (auto it = myarray.begin(); it != myarray.end(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}
