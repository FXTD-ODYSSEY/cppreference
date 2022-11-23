// cplusplus link https://cplusplus.com/reference/type_traits\is_same
// is_same example
#include <cstdint>
#include <iostream>
#include <type_traits>

typedef int integer_type;
struct A {
    int x, y;
};
struct B {
    int x, y;
};
typedef A C;

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_same:" << std::endl;
    std::cout << "int, const int: " << std::is_same<int, const int>::value << std::endl;
    std::cout << "int, integer_type: " << std::is_same<int, integer_type>::value << std::endl;
    std::cout << "A, B: " << std::is_same<A, B>::value << std::endl;
    std::cout << "A, C: " << std::is_same<A, C>::value << std::endl;
    std::cout << "signed char, std::int8_t: " << std::is_same<signed char, std::int8_t>::value << std::endl;
    return 0;
}
