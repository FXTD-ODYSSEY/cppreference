// cplusplus link https://cplusplus.com/reference/type_traits\is_convertible
// is_convertible example
#include <iostream>
#include <type_traits>

struct A { };
struct B : A { };

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_convertible:" << std::endl;
    std::cout << "int => float: " << std::is_convertible<int, float>::value << std::endl;
    std::cout << "int = >const int: " << std::is_convertible<int, const int>::value << std::endl;
    std::cout << "A => B: " << std::is_convertible<A, B>::value << std::endl;
    std::cout << "B => A: " << std::is_convertible<B, A>::value << std::endl;
    return 0;
}
