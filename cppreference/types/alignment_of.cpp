// cppreference link https://en.cppreference.com/w/cpp/types/alignment_of
#include <cstdint>
#include <iostream>
#include <type_traits>

struct A { };
struct B {
    std::int8_t p;
    std::int16_t q;
};

int main()
{
    std::cout << std::alignment_of<A>::value << ' ';
    std::cout << std::alignment_of<B>::value << ' ';
    std::cout << std::alignment_of<int>() << ' '; // alt syntax
    std::cout << std::alignment_of_v<double> << '\n'; // c++17 alt syntax
}
