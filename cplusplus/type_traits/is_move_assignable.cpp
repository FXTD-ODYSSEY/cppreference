// cplusplus link https://cplusplus.com/reference/type_traits\is_move_assignable
// is_move_assignable example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    B& operator=(B&&) = delete;
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_move_assignable:" << std::endl;
    std::cout << "int: " << std::is_move_assignable<int>::value << std::endl;
    std::cout << "A: " << std::is_move_assignable<A>::value << std::endl;
    std::cout << "B: " << std::is_move_assignable<B>::value << std::endl;
    return 0;
}
