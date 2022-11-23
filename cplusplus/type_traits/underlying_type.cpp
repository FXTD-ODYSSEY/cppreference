// cplusplus link https://cplusplus.com/reference/type_traits\underlying_type
// underlying_type example
#include <iostream>
#include <type_traits>

enum class A { a,
    b,
    c };
enum B : short { x,
    y,
    z };

int main()
{

    typedef std::underlying_type<A>::type A_under; // int
    typedef std::underlying_type<B>::type B_under; // short

    std::cout << std::boolalpha;
    std::cout << "typedefs of int:" << std::endl;

    std::cout << "A_under: " << std::is_same<int, A_under>::value << std::endl;
    std::cout << "B_under: " << std::is_same<int, B_under>::value << std::endl;

    return 0;
}
