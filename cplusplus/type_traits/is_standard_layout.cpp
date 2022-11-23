// cplusplus link https://cplusplus.com/reference/type_traits\is_standard_layout
// is_standard_layout example
#include <iostream>
#include <type_traits>

struct A {
    int i;
};

struct B : A {
    int j;
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_standard_layout:" << std::endl;
    std::cout << "int: " << std::is_standard_layout<int>::value << std::endl;
    std::cout << "A: " << std::is_standard_layout<A>::value << std::endl;
    std::cout << "B: " << std::is_standard_layout<B>::value << std::endl;
    return 0;
}
