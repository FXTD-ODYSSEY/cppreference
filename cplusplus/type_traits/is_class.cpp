// cplusplus link https://cplusplus.com/reference/type_traits\is_class
// is_class example
#include <iostream>
#include <type_traits>

struct A { };
class B { };
union C {
    int i;
    float f;
};
enum class D { x,
    y,
    z };

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_class:" << std::endl;
    std::cout << "A: " << std::is_class<A>::value << std::endl;
    std::cout << "B: " << std::is_class<B>::value << std::endl;
    std::cout << "C: " << std::is_class<C>::value << std::endl;
    std::cout << "D: " << std::is_class<D>::value << std::endl;
    return 0;
}
