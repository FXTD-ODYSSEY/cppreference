// cppreference link https://en.cppreference.com/w/cpp/types/add_reference
#include <iostream>
#include <type_traits>

int main()
{
    using nonref = int;
    using lref = typename std::add_lvalue_reference<nonref>::type;
    using rref = typename std::add_rvalue_reference<nonref>::type;
    using voidref = std::add_lvalue_reference_t<void>;

    std::cout << std::boolalpha;
    std::cout << std::is_lvalue_reference<nonref>::value << '\n';
    std::cout << std::is_lvalue_reference<lref>::value << '\n';
    std::cout << std::is_rvalue_reference<rref>::value << '\n';
    std::cout << std::is_reference_v<voidref> << '\n';
}
