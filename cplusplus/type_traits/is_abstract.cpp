// cplusplus link https://cplusplus.com/reference/type_traits\is_abstract
// is_abstract example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    virtual void fn() = 0; // pure virtual function
};
struct C : B { };
struct D : C {
    virtual void fn() { }
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_abstract:" << std::endl;
    std::cout << "A: " << std::is_abstract<A>::value << std::endl;
    std::cout << "B: " << std::is_abstract<B>::value << std::endl;
    std::cout << "C: " << std::is_abstract<C>::value << std::endl;
    std::cout << "D: " << std::is_abstract<D>::value << std::endl;
    return 0;
}
