// cplusplus link https://cplusplus.com/reference/type_traits\add_rvalue_reference
// add_rvalue_reference
#include <iostream>
#include <type_traits>

int main()
{
    typedef std::add_rvalue_reference<int>::type A; // int&&
    typedef std::add_rvalue_reference<int&>::type B; // int&  (no change)
    typedef std::add_rvalue_reference<int&&>::type C; // int&& (no change)
    typedef std::add_rvalue_reference<int*>::type D; // int*&&

    std::cout << std::boolalpha;
    std::cout << "typedefs of int&&:" << std::endl;
    std::cout << "A: " << std::is_same<int&&, A>::value << std::endl;
    std::cout << "B: " << std::is_same<int&&, B>::value << std::endl;
    std::cout << "C: " << std::is_same<int&&, C>::value << std::endl;
    std::cout << "D: " << std::is_same<int&&, D>::value << std::endl;

    return 0;
}
