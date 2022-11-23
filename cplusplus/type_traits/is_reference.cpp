// cplusplus link https://cplusplus.com/reference/type_traits\is_reference
// is_reference example
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_reference:" << std::endl;
    std::cout << "int: " << std::is_reference<int>::value << std::endl;
    std::cout << "int&: " << std::is_reference<int&>::value << std::endl;
    std::cout << "int&&: " << std::is_reference<int&&>::value << std::endl;
    return 0;
}
