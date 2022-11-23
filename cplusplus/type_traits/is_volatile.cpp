// cplusplus link https://cplusplus.com/reference/type_traits\is_volatile
// is_volatile example
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_volatile:" << std::endl;
    std::cout << "int: " << std::is_volatile<int>::value << std::endl;
    std::cout << "volatile int: " << std::is_volatile<volatile int>::value << std::endl;
    std::cout << "volatile int*: " << std::is_volatile<volatile int*>::value << std::endl;
    std::cout << "int* volatile: " << std::is_volatile<int* volatile>::value << std::endl;
    return 0;
}
