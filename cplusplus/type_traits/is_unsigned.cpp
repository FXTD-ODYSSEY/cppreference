// cplusplus link https://cplusplus.com/reference/type_traits\is_unsigned
// is_unsigned example
#include <iostream>
#include <type_traits>

struct A { };
enum class B : int { x,
    y,
    z };

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_unsigned:" << std::endl;
    std::cout << "int: " << std::is_unsigned<int>::value << std::endl;
    std::cout << "unsigned long: " << std::is_unsigned<unsigned long>::value << std::endl;
    std::cout << "A: " << std::is_unsigned<A>::value << std::endl;
    std::cout << "B: " << std::is_unsigned<B>::value << std::endl;
    return 0;
}
