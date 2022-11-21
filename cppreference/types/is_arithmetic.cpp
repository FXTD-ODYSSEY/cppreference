// cppreference link https://en.cppreference.com/w/cpp/types/is_arithmetic
#include <iostream>
#include <type_traits>

class A { };

int main()
{
    std::cout << std::boolalpha
              << "A:           " << std::is_arithmetic_v<A> << '\n' // false
              << "bool:        " << std::is_arithmetic_v<bool> << '\n' // true
              << "int:         " << std::is_arithmetic_v<int> << '\n' // true
              << "int const:   " << std::is_arithmetic_v<int const> << '\n' // true
              << "int &:       " << std::is_arithmetic_v<int&> << '\n' // false
              << "int *:       " << std::is_arithmetic_v<int*> << '\n' // false
              << "float:       " << std::is_arithmetic_v<float> << '\n' // true
              << "float const: " << std::is_arithmetic_v<float const> << '\n' // true
              << "float &:     " << std::is_arithmetic_v<float&> << '\n' // false
              << "float *:     " << std::is_arithmetic_v<float*> << '\n' // false
              << "char:        " << std::is_arithmetic_v<char> << '\n' // true
              << "char const:  " << std::is_arithmetic_v<char const> << '\n' // true
              << "char &:      " << std::is_arithmetic_v<char&> << '\n' // false
              << "char *:      " << std::is_arithmetic_v<char*> << '\n' // false
        ;
}
