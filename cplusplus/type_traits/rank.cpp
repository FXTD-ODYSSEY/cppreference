// cplusplus link https://cplusplus.com/reference/type_traits\rank
// array rank example
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << "rank:" << std::endl;
    std::cout << "int: " << std::rank<int>::value << std::endl;
    std::cout << "int[]: " << std::rank<int[]>::value << std::endl;
    std::cout << "int[][10]: " << std::rank<int[][10]>::value << std::endl;
    std::cout << "int[10][10]: " << std::rank<int[10][10]>::value << std::endl;
    return 0;
}
