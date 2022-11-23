// cplusplus link https://cplusplus.com/reference/type_traits\is_assignable
// is_assignable example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    B& operator=(const A&) { return *this; }
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_assignable:" << std::endl;
    std::cout << "A=B: " << std::is_assignable<A, B>::value << std::endl;
    std::cout << "B=A: " << std::is_assignable<B, A>::value << std::endl;
    return 0;
}
