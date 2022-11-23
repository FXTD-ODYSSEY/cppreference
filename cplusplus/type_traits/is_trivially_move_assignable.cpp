// cplusplus link https://cplusplus.com/reference/type_traits\is_trivially_move_assignable
// is_trivially_move_assignable example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    B& operator=(A&&) { return *this; }
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_trivially_move_assignable:" << std::endl;
    std::cout << "int=short: " << std::is_trivially_move_assignable<int, short>::value << std::endl;
    std::cout << "A=A: " << std::is_trivially_move_assignable<A, A>::value << std::endl;
    std::cout << "B=A: " << std::is_trivially_move_assignable<B, A>::value << std::endl;
    return 0;
}
