// cppreference link https://en.cppreference.com/w/cpp/types/is_corresponding_member
#include <iostream>
#include <type_traits>

struct Foo {
    int x;
};
struct Bar {
    int y;
    double z;
};

struct Baz : Foo, Bar { }; // not standard-layout

int main()
{
    std::cout << std::boolalpha
              << std::is_same_v<decltype(&Baz::x), int Foo::*> << '\n'
              << std::is_same_v<decltype(&Baz::y), int Bar::*> << '\n'
              << std::is_corresponding_member(&Foo::x, &Bar::y) << '\n'
              << std::is_corresponding_member(&Baz::x, &Baz::y) << '\n'
              << std::is_corresponding_member<Baz, Baz, int, int>(&Baz::x, &Baz::y) << '\n';
}
