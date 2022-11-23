// cplusplus link https://cplusplus.com/reference/type_traits\is_rvalue_reference
// is_rvalue_reference example
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_rvalue_reference:" << std::endl;
    std::cout << "int: " << std::is_rvalue_reference<int>::value << std::endl;
    std::cout << "int&: " << std::is_rvalue_reference<int&>::value << std::endl;
    std::cout << "int&&: " << std::is_rvalue_reference<int&&>::value << std::endl;
    return 0;
}
