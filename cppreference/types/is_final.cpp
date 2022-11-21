// cppreference link https://en.cppreference.com/w/cpp/types/is_final
#include <iostream>
#include <type_traits>

class A { };
class B final { };

int main()
{
    std::cout
        << std::boolalpha
        << std::is_final<A>::value << '\n'
        << std::is_final<B>::value << '\n';
}
