// cplusplus link https://cplusplus.com/reference/type_traits\is_scalar
// is_scalar example
#include <iostream>
#include <type_traits>

class A { };

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_scalar:" << std::endl;
    std::cout << "int: " << std::is_scalar<int>::value << std::endl;
    std::cout << "A: " << std::is_scalar<A>::value << std::endl;
    std::cout << "A&: " << std::is_scalar<A&>::value << std::endl;
    std::cout << "A*: " << std::is_scalar<A*>::value << std::endl;
    std::cout << "int(int): " << std::is_scalar<int(int)>::value << std::endl;
    std::cout << "int(*)(int): " << std::is_scalar<int (*)(int)>::value << std::endl;
    return 0;
}
