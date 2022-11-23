// cplusplus link https://cplusplus.com/reference/type_traits\is_base_of
// is_base_of example
#include <iostream>
#include <type_traits>

struct A { };
struct B : A { };

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_base_of:" << std::endl;
    std::cout << "int, int: " << std::is_base_of<int, int>::value << std::endl;
    std::cout << "A, A: " << std::is_base_of<A, A>::value << std::endl;
    std::cout << "A, B: " << std::is_base_of<A, B>::value << std::endl;
    std::cout << "A, const B: " << std::is_base_of<A, const B>::value << std::endl;
    std::cout << "A&, B&: " << std::is_base_of<A&, B&>::value << std::endl;
    std::cout << "B, A: " << std::is_base_of<B, A>::value << std::endl;
    return 0;
}
