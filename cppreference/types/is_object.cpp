// cppreference link https://en.cppreference.com/w/cpp/types/is_object
#include <iostream>
#include <type_traits>

int main()
{
    class cls { };
    std::cout << std::boolalpha;
    std::cout << std::is_object<int>::value << '\n';
    std::cout << std::is_object<int&>::value << '\n';
    std::cout << std::is_object<cls>::value << '\n';
    std::cout << std::is_object<cls&>::value << '\n';
}
