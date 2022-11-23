// cplusplus link https://cplusplus.com/reference/type_traits\integral_constant\operator%20value_type
// integral_constant::operator value_type example
#include <iostream>
#include <type_traits>

int main()
{
    // is_integral<T> inherits from integral_constant

    if (std::is_integral<int>())
        std::cout << "int is an integral type" << std::endl;

    // same result as:
    if (std::is_integral<int>::value)
        std::cout << "int is an integral type" << std::endl;

    return 0;
}
