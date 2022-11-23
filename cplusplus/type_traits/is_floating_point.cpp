// cplusplus link https://cplusplus.com/reference/type_traits\is_floating_point
// is_floating_point example
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_floating_point:" << std::endl;
    std::cout << "int: " << std::is_floating_point<int>::value << std::endl;
    std::cout << "float: " << std::is_floating_point<float>::value << std::endl;
    std::cout << "const double: " << std::is_floating_point<const double>::value << std::endl;
    return 0;
}
