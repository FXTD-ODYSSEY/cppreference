// cplusplus link https://cplusplus.com/reference/type_traits\has_virtual_destructor
// has_virtual_destructor example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    virtual ~B() { }
};
struct C : B { };

int main()
{
    std::cout << std::boolalpha;
    std::cout << "has_virtual_destructor:" << std::endl;
    std::cout << "int: " << std::has_virtual_destructor<int>::value << std::endl;
    std::cout << "A: " << std::has_virtual_destructor<A>::value << std::endl;
    std::cout << "B: " << std::has_virtual_destructor<B>::value << std::endl;
    std::cout << "C: " << std::has_virtual_destructor<C>::value << std::endl;
    return 0;
}
