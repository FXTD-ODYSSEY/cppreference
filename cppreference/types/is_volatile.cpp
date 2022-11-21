// cppreference link https://en.cppreference.com/w/cpp/types/is_volatile
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::boolalpha;
    std::cout << std::is_volatile<int>::value << '\n';
    std::cout << std::is_volatile<volatile int>::value << '\n';
}
