// cplusplus link https://cplusplus.com/reference/type_traits\is_nothrow_assignable
// is_nothrow_assignable example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    B& operator=(const A&) noexcept { return *this; }
    B& operator=(const B&) { return *this; }
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_nothrow_assignable:" << std::endl;
    std::cout << "A=A: " << std::is_nothrow_assignable<A, A>::value << std::endl;
    std::cout << "B=A: " << std::is_nothrow_assignable<B, A>::value << std::endl;
    std::cout << "B=B: " << std::is_nothrow_assignable<B, B>::value << std::endl;
    return 0;
}
