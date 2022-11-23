// cplusplus link https://cplusplus.com/reference/type_traits\conditional
// conditional example
#include <iostream>
#include <type_traits>

int main()
{

    short int i = 1; // code does not compile if type of i is not integral

    typedef std::conditional<true, int, float>::type A; // int
    typedef std::conditional<false, int, float>::type B; // float
    typedef std::conditional<std::is_integral<A>::value, long, int>::type C; // long
    typedef std::conditional<std::is_integral<B>::value, long, int>::type D; // int

    std::cout << std::boolalpha;
    std::cout << "typedefs of int:" << std::endl;
    std::cout << "A: " << std::is_same<int, A>::value << std::endl;
    std::cout << "B: " << std::is_same<int, B>::value << std::endl;
    std::cout << "C: " << std::is_same<int, C>::value << std::endl;
    std::cout << "D: " << std::is_same<int, D>::value << std::endl;

    return 0;
}
