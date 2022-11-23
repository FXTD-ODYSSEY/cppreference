// cplusplus link https://cplusplus.com/reference/array\array\max_size
// array::max_size
#include <array>
#include <iostream>

int main()
{
    std::array<int, 10> myints;
    std::cout << "size of myints: " << myints.size() << '\n';
    std::cout << "max_size of myints: " << myints.max_size() << '\n';

    return 0;
}
