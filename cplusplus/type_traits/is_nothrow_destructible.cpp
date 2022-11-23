// cplusplus link https://cplusplus.com/reference/type_traits\is_nothrow_destructible
// is_nothrow_destructible example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    ~B() { }
};
struct C {
    ~C() noexcept(false) { }
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_nothrow_destructible:" << std::endl;
    std::cout << "int: " << std::is_nothrow_destructible<int>::value << std::endl;
    std::cout << "A: " << std::is_nothrow_destructible<A>::value << std::endl;
    std::cout << "B: " << std::is_nothrow_destructible<B>::value << std::endl;
    std::cout << "C: " << std::is_nothrow_destructible<C>::value << std::endl;
    return 0;
}
