// cplusplus link https://cplusplus.com/reference/type_traits\is_nothrow_copy_constructible
// is_nothrow_copy_constructible example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    B(const B&) { }
};
struct C {
    C(const C&)
    noexcept { }
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_nothrow_copy_constructible:" << std::endl;
    std::cout << "int: " << std::is_nothrow_copy_constructible<int>::value << std::endl;
    std::cout << "A: " << std::is_nothrow_copy_constructible<A>::value << std::endl;
    std::cout << "B: " << std::is_nothrow_copy_constructible<B>::value << std::endl;
    std::cout << "C: " << std::is_nothrow_copy_constructible<C>::value << std::endl;
    return 0;
}
