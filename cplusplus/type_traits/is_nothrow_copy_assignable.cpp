// cplusplus link https://cplusplus.com/reference/type_traits\is_nothrow_copy_assignable
// is_nothrow_copy_assignable example
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    B& operator=(const B&) { return *this; }
};
struct C {
    C& operator=(const C&) noexcept { return *this; }
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_nothrow_copy_assignable:" << std::endl;
    std::cout << "int: " << std::is_nothrow_copy_assignable<int>::value << std::endl;
    std::cout << "A: " << std::is_nothrow_copy_assignable<A>::value << std::endl;
    std::cout << "B: " << std::is_nothrow_copy_assignable<B>::value << std::endl;
    std::cout << "C: " << std::is_nothrow_copy_assignable<C>::value << std::endl;
    return 0;
}
