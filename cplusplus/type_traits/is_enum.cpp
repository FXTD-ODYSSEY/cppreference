// cplusplus link https://cplusplus.com/reference/type_traits\is_enum
// is_enum example
#include <iostream>
#include <type_traits>

enum A { first,
    second,
    third }; // unscoped enum (C-style)
class B { };
enum class C { alpha,
    beta,
    gamma }; // scoped enum (C++11-style)

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_enum:" << std::endl;
    std::cout << "A: " << std::is_enum<A>::value << std::endl;
    std::cout << "B: " << std::is_enum<B>::value << std::endl;
    std::cout << "C: " << std::is_enum<C>::value << std::endl;
    std::cout << "decltype(C::alpha): " << std::is_enum<decltype(C::alpha)>::value << std::endl;
    return 0;
}
