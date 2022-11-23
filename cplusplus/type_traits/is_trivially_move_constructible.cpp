// cplusplus link https://cplusplus.com/reference/type_traits\is_trivially_move_constructible
// is_trivially_move_constructible example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    B(B&&) { }
};
struct C {
    virtual void fn() { }
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_trivially_move_constructible:" << std::endl;
    std::cout << "int: " << std::is_trivially_move_constructible<int>::value << std::endl;
    std::cout << "A: " << std::is_trivially_move_constructible<A>::value << std::endl;
    std::cout << "B: " << std::is_trivially_move_constructible<B>::value << std::endl;
    std::cout << "C: " << std::is_trivially_move_constructible<C>::value << std::endl;
    return 0;
}
