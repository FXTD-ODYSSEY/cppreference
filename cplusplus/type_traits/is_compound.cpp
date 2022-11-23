// cplusplus link https://cplusplus.com/reference/type_traits\is_compound
// is_compound example
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_compound:" << std::endl;
    std::cout << "long int: " << std::is_compound<long int>::value << std::endl;
    std::cout << "float: " << std::is_compound<float>::value << std::endl;
    std::cout << "float*: " << std::is_compound<float*>::value << std::endl;
    std::cout << "float&: " << std::is_compound<float&>::value << std::endl;
    std::cout << "decltype(nullptr): " << std::is_compound<decltype(nullptr)>::value << std::endl;
    return 0;
}
