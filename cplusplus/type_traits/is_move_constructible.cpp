// cplusplus link https://cplusplus.com/reference/type_traits\is_move_constructible
// is_move_constructible example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    B(B&&) = delete;
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_move_constructible:" << std::endl;
    std::cout << "int: " << std::is_move_constructible<int>::value << std::endl;
    std::cout << "A: " << std::is_move_constructible<A>::value << std::endl;
    std::cout << "B: " << std::is_move_constructible<B>::value << std::endl;
    return 0;
}
