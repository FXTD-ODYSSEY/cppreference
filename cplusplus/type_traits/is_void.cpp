// cplusplus link https://cplusplus.com/reference/type_traits\is_void
// is_void example
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_void:" << std::endl;
    std::cout << "int: " << std::is_void<int>::value << std::endl;
    std::cout << "void: " << std::is_void<void>::value << std::endl;
    return 0;
}
