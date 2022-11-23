// cplusplus link https://cplusplus.com/reference/type_traits\is_const
// is_const example
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_const:" << std::endl;
    std::cout << "int: " << std::is_const<int>::value << std::endl;
    std::cout << "const int: " << std::is_const<const int>::value << std::endl;
    std::cout << "const int*: " << std::is_const<const int*>::value << std::endl;
    std::cout << "int* const: " << std::is_const<int* const>::value << std::endl;
    return 0;
}
