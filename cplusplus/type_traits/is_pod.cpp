// cplusplus link https://cplusplus.com/reference/type_traits\is_pod
// is_pod example
#include <iostream>
#include <type_traits>

struct A {
    int i;
}; // C-struct (POD)
class B : public A { }; // still POD (no data members added)
struct C : B {
    void fn() { }
}; // still POD (member function)
struct D : C {
    D() { }
}; // no POD (custom default constructor)

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_pod:" << std::endl;
    std::cout << "int: " << std::is_pod<int>::value << std::endl;
    std::cout << "A: " << std::is_pod<A>::value << std::endl;
    std::cout << "B: " << std::is_pod<B>::value << std::endl;
    std::cout << "C: " << std::is_pod<C>::value << std::endl;
    std::cout << "D: " << std::is_pod<D>::value << std::endl;
    return 0;
}
