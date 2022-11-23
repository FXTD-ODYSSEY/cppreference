// cplusplus link https://cplusplus.com/reference/type_traits\is_trivially_constructible
// is_trivially_constructible example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    B() { }
}; // non-trivial default ctor.

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_trivially_constructible:" << std::endl;
    std::cout << "A(): " << std::is_trivially_constructible<A>::value << std::endl;
    std::cout << "A(A): " << std::is_trivially_constructible<A, A>::value << std::endl;
    std::cout << "B(): " << std::is_trivially_constructible<B>::value << std::endl;
    std::cout << "B(B): " << std::is_trivially_constructible<B, B>::value << std::endl;
    return 0;
}
