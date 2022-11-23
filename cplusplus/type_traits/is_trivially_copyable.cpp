// cplusplus link https://cplusplus.com/reference/type_traits\is_trivially_copyable
// is_trivially_copiable example
#include <iostream>
#include <type_traits>

struct A {
    int i;
};

struct B {
    int i, j;
    B(const B& x)
        : i(x.i)
        , j(1) {}; // copy ctor
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_trivially_copyable:" << std::endl;
    std::cout << "int: " << std::is_trivially_copyable<int>::value << std::endl;
    std::cout << "A: " << std::is_trivially_copyable<A>::value << std::endl;
    std::cout << "B: " << std::is_trivially_copyable<B>::value << std::endl;
    return 0;
}
