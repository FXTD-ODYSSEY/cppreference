// cplusplus link https://cplusplus.com/reference/type_traits\is_member_object_pointer
// is_member_object_pointer example
#include <iostream>
#include <type_traits>

struct A {
    int x;
};

int main()
{
    int A::*pt = &A::x;
    std::cout << std::boolalpha;
    std::cout << "is_member_object_pointer:" << std::endl;
    std::cout << "A*: " << std::is_member_object_pointer<A*>::value << std::endl;
    std::cout << "int A::*: " << std::is_member_object_pointer<int A::*>::value << std::endl;
    std::cout << "decltype(pt): " << std::is_member_object_pointer<decltype(pt)>::value << std::endl;
    return 0;
}
