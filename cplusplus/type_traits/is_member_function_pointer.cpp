// cplusplus link https://cplusplus.com/reference/type_traits\is_member_function_pointer
// is_member_function_pointer example
#include <iostream>
#include <type_traits>

struct A {
    void fn() {};
};

int main()
{
    void (A::*pt)() = &A::fn;
    std::cout << std::boolalpha;
    std::cout << "is_member_function_pointer:" << std::endl;
    std::cout << "A*: " << std::is_member_function_pointer<A*>::value << std::endl;
    std::cout << "void(A::*)(): " << std::is_member_function_pointer<void (A::*)()>::value << std::endl;
    std::cout << "decltype(pt): " << std::is_member_function_pointer<decltype(pt)>::value << std::endl;
    return 0;
}
