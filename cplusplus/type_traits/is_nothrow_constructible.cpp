// cplusplus link https://cplusplus.com/reference/type_traits\is_nothrow_constructible
// is_nothrow_constructible example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    B() { }
    B(const A&)
    noexcept { }
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_nothrow_constructible:" << std::endl;
    std::cout << "int(): " << std::is_nothrow_constructible<int>::value << std::endl;
    std::cout << "A(): " << std::is_nothrow_constructible<A>::value << std::endl;
    std::cout << "B(): " << std::is_nothrow_constructible<B>::value << std::endl;
    std::cout << "B(A): " << std::is_nothrow_constructible<B, A>::value << std::endl;
    return 0;
}
