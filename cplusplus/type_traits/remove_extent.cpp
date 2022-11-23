// cplusplus link https://cplusplus.com/reference/type_traits\remove_extent
// remove_extent
#include <iostream>
#include <type_traits>

int main()
{
    typedef std::remove_extent<int>::type A; // int
    typedef std::remove_extent<int[24]>::type B; // int
    typedef std::remove_extent<int[24][60]>::type C; // int[60]
    typedef std::remove_extent<int[][60]>::type D; // int[60]

    std::cout << std::boolalpha;
    std::cout << "typedefs of int:" << std::endl;
    std::cout << "A: " << std::is_same<int, A>::value << std::endl;
    std::cout << "B: " << std::is_same<int, B>::value << std::endl;
    std::cout << "C: " << std::is_same<int, C>::value << std::endl;
    std::cout << "D: " << std::is_same<int, D>::value << std::endl;

    return 0;
}
