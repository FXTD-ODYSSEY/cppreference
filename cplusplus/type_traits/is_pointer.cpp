// cplusplus link https://cplusplus.com/reference/type_traits\is_pointer
// is_pointer example
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_pointer:" << std::endl;
    std::cout << "int: " << std::is_pointer<int>::value << std::endl;
    std::cout << "int*: " << std::is_pointer<int*>::value << std::endl;
    std::cout << "int**: " << std::is_pointer<int**>::value << std::endl;
    std::cout << "int(*)(int): " << std::is_pointer<int (*)(int)>::value << std::endl;
    return 0;
}
