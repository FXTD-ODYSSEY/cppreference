// cppreference link https://en.cppreference.com/w/cpp/types/type_index/name
#include <iostream>
#include <typeindex>
int main()
{
    std::cout << std::type_index(typeid(std::cout)).name();
}
