// cplusplus link https://cplusplus.com/reference/type_traits\is_constructible
// is_constructible example
#include <iostream>
#include <type_traits>

struct A {
    A(int, int) {};
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_constructible:" << std::endl;
    std::cout << "int: " << std::is_constructible<int>::value << std::endl;
    std::cout << "int(float): " << std::is_constructible<int, float>::value << std::endl;
    std::cout << "int(float,float): " << std::is_constructible<int, float, float>::value << std::endl;
    std::cout << "A: " << std::is_constructible<A>::value << std::endl;
    std::cout << "A(int): " << std::is_constructible<A, int>::value << std::endl;
    std::cout << "A(int,int): " << std::is_constructible<A, int, int>::value << std::endl;
    std::cout << "A(int,int,int): " << std::is_constructible<A, int, int, int>::value << std::endl;
    return 0;
}
