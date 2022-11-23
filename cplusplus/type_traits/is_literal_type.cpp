// cplusplus link https://cplusplus.com/reference/type_traits\is_literal_type
// is_literal_type example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    ~B() { }
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_literal_type:" << std::endl;
    std::cout << "int: " << std::is_literal_type<int>::value << std::endl;
    std::cout << "int&: " << std::is_literal_type<int&>::value << std::endl;
    std::cout << "int*: " << std::is_literal_type<int*>::value << std::endl;
    std::cout << "A: " << std::is_literal_type<A>::value << std::endl;
    std::cout << "B: " << std::is_literal_type<B>::value << std::endl;
    return 0;
}
