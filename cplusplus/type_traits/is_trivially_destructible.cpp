// cplusplus link https://cplusplus.com/reference/type_traits\is_trivially_destructible
// is_trivially_destructible example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    ~B() { }
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_trivially_destructible:" << std::endl;
    std::cout << "int: " << std::is_trivially_destructible<int>::value << std::endl;
    std::cout << "A: " << std::is_trivially_destructible<A>::value << std::endl;
    std::cout << "B: " << std::is_trivially_destructible<B>::value << std::endl;
    return 0;
}
