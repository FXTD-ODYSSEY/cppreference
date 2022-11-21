// cppreference link https://en.cppreference.com/w/cpp/types/is_member_object_pointer
#include <iostream>
#include <type_traits>

int main()
{
    class C { };
    std::cout << "Is member object pointer?\n"
              << std::boolalpha
              << std::is_member_object_pointer_v<int(C::*)>
              << ": int(C::*)\n"
              << std::is_member_object_pointer_v<int (C::*)()>
              << ": int(C::*)()\n";
}
