// cplusplus link https://cplusplus.com/reference/type_traits\remove_pointer
// remove_pointer
#include <iostream>
#include <type_traits>

int main()
{
    typedef std::remove_pointer<int>::type A; // int
    typedef std::remove_pointer<int*>::type B; // int
    typedef std::remove_pointer<int**>::type C; // int*
    typedef std::remove_pointer<const int*>::type D; // const int
    typedef std::remove_pointer<int* const>::type E; // int

    std::cout << std::boolalpha;
    std::cout << "typedefs of int:" << std::endl;
    std::cout << "A: " << std::is_same<int, A>::value << std::endl;
    std::cout << "B: " << std::is_same<int, B>::value << std::endl;
    std::cout << "C: " << std::is_same<int, C>::value << std::endl;
    std::cout << "D: " << std::is_same<int, D>::value << std::endl;
    std::cout << "E: " << std::is_same<int, E>::value << std::endl;

    return 0;
}
