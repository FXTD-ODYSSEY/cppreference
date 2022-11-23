// cplusplus link https://cplusplus.com/reference/type_traits\is_destructible
// is_destructible example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    ~B() = delete;
};
struct C : B { };

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_destructible:" << std::endl;
    std::cout << "int: " << std::is_destructible<int>::value << std::endl;
    std::cout << "A: " << std::is_destructible<A>::value << std::endl;
    std::cout << "B: " << std::is_destructible<B>::value << std::endl;
    std::cout << "C: " << std::is_destructible<C>::value << std::endl;
    return 0;
}
