// cplusplus link https://cplusplus.com/reference/type_traits\common_type
// common_type example
#include <iostream>
#include <type_traits>

struct Base { };
struct Derived : Base { };

int main()
{

    typedef std::common_type<char, short, int>::type A; // int
    typedef std::common_type<float, double>::type B; // double
    typedef std::common_type<Derived, Base>::type C; // Base
    typedef std::common_type<Derived*, Base*>::type D; // Base*
    typedef std::common_type<const int, volatile int>::type E; // int

    std::cout << std::boolalpha;
    std::cout << "typedefs of int:" << std::endl;
    std::cout << "A: " << std::is_same<int, A>::value << std::endl;
    std::cout << "B: " << std::is_same<int, B>::value << std::endl;
    std::cout << "C: " << std::is_same<int, C>::value << std::endl;
    std::cout << "D: " << std::is_same<int, D>::value << std::endl;
    std::cout << "E: " << std::is_same<int, E>::value << std::endl;

    return 0;
}
