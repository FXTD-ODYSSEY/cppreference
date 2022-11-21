// cppreference link https://en.cppreference.com/w/cpp/types/is_void
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::boolalpha;
    std::cout << std::is_void<void>::value << '\n';
    std::cout << std::is_void<int>::value << '\n';
}
