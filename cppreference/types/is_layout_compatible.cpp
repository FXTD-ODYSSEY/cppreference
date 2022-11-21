// cppreference link https://en.cppreference.com/w/cpp/types/is_layout_compatible
#include <iomanip>
#include <iostream>
#include <type_traits>

struct Foo {
    int x;
    char y;
};

class Bar {
    const int u = 42;
    volatile char v = '*';
};

enum E0 : int {};
enum class E1 : int {};

#define SHOW(...) std::cout << std::setw(54) << #__VA_ARGS__ << " = " << __VA_ARGS__ << '\n'

int main()
{
    std::cout << std::boolalpha << std::left;
    SHOW(std::is_layout_compatible_v<const void, volatile void>);
    SHOW(std::is_layout_compatible_v<Foo, Bar>);
    SHOW(std::is_layout_compatible_v<Foo[2], Bar[2]>);
    SHOW(std::is_layout_compatible_v<int, E0>);
    SHOW(std::is_layout_compatible_v<E0, E1>);
    SHOW(std::is_layout_compatible_v<long, unsigned long>);
    SHOW(std::is_layout_compatible_v<char*, const char*>);
    SHOW(std::is_layout_compatible_v<char*, char* const>);
}
