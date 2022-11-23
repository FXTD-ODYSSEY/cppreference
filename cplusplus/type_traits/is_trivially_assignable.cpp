// cplusplus link https://cplusplus.com/reference/type_traits\is_trivially_assignable
// is_trivially_assignable example
#include <iostream>
#include <type_traits>

struct A { };
struct B : A { };
struct C {
    C& operator=(const A&) { return *this; }
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_trivially_assignable:" << std::endl;
    std::cout << "int=short: " << std::is_trivially_assignable<int, short>::value << std::endl;
    std::cout << "A=A: " << std::is_trivially_assignable<A, A>::value << std::endl;
    std::cout << "A=B: " << std::is_trivially_assignable<A, B>::value << std::endl;
    std::cout << "B=A: " << std::is_trivially_assignable<B, A>::value << std::endl;
    std::cout << "C=A: " << std::is_trivially_assignable<C, A>::value << std::endl;
    return 0;
}
