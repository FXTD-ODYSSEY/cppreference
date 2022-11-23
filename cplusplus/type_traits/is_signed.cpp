// cplusplus link https://cplusplus.com/reference/type_traits\is_signed
// is_signed example
#include <iostream>
#include <type_traits>

struct A { };
enum class B : int { x,
    y,
    z };

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_signed:" << std::endl;
    std::cout << "int: " << std::is_signed<int>::value << std::endl;
    std::cout << "float: " << std::is_signed<float>::value << std::endl;
    std::cout << "unsigned long: " << std::is_signed<unsigned long>::value << std::endl;
    std::cout << "A: " << std::is_signed<A>::value << std::endl;
    std::cout << "B: " << std::is_signed<B>::value << std::endl;
    return 0;
}
