// cplusplus link https://cplusplus.com/reference/type_traits\is_union
// is_union example
#include <iostream>
#include <type_traits>

union A {
    int i;
    float f;
}; // named union
struct B {
    union {
        int foo;
        float bar;
    }; // anonymous member union
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_union:" << std::endl;
    std::cout << "int: " << std::is_union<int>::value << std::endl;
    std::cout << "A: " << std::is_union<A>::value << std::endl;
    std::cout << "B: " << std::is_union<B>::value << std::endl;
    return 0;
}
