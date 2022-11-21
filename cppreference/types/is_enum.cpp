// cppreference link https://en.cppreference.com/w/cpp/types/is_enum
#include <iostream>
#include <type_traits>

struct A {
    enum E {};
};

enum E {};

enum class Ec : int {};

int main()
{
    std::cout
        << std::boolalpha
        << std::is_enum<A>::value << '\n'
        << std::is_enum<E>::value << '\n'
        << std::is_enum<A::E>() << '\n'
        << std::is_enum_v<int> << '\n' // Uses helper variable template (C++17)
        << std::is_enum_v<Ec> << '\n'; // Uses helper variable template (C++17)
}
