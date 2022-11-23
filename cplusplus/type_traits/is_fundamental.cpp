// cplusplus link https://cplusplus.com/reference/type_traits\is_fundamental
// is_fundamental example
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_fundamental:" << std::endl;
    std::cout << "unsigned: " << std::is_fundamental<unsigned>::value << std::endl;
    std::cout << "float: " << std::is_fundamental<float>::value << std::endl;
    std::cout << "float*: " << std::is_fundamental<float*>::value << std::endl;
    std::cout << "decltype(nullptr): " << std::is_fundamental<decltype(nullptr)>::value << std::endl;
    return 0;
}
