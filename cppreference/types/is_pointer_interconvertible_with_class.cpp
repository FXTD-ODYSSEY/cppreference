// cppreference link https://en.cppreference.com/w/cpp/types/is_pointer_interconvertible_with_class
#include <iostream>
#include <type_traits>

struct Foo {
    int x;
};
struct Bar {
    int y;
};

struct Baz : Foo, Bar { }; // not standard-layout

int main()
{
    std::cout << std::boolalpha
              << std::is_same_v<decltype(&Baz::x), int Baz::*> << '\n'
              << std::is_pointer_interconvertible_with_class(&Baz::x) << '\n'
              << std::is_pointer_interconvertible_with_class<Baz, int>(&Baz::x) << '\n';
}
