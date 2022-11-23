// cplusplus link https://cplusplus.com/reference/type_traits\add_cv
// add_cv example
#include <iostream>
#include <type_traits>

int main()
{
    typedef std::add_cv<int>::type A;
    typedef std::add_cv<const int>::type B;
    typedef std::add_cv<volatile int>::type C;
    typedef std::add_cv<const volatile int>::type D;

    std::cout << std::boolalpha;
    std::cout << "typedefs of const volatile int:" << std::endl;
    std::cout << "A: " << std::is_same<const volatile int, A>::value << std::endl;
    std::cout << "B: " << std::is_same<const volatile int, B>::value << std::endl;
    std::cout << "C: " << std::is_same<const volatile int, C>::value << std::endl;
    std::cout << "D: " << std::is_same<const volatile int, D>::value << std::endl;

    return 0;
}
