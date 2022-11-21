// cppreference link https://en.cppreference.com/w/cpp/types/is_pointer_interconvertible_base_of
#include <iostream>
#include <type_traits>

struct Foo { };

struct Bar { };

class Baz : Foo, public Bar {
    int x;
};

class NonStdLayout : public Baz {
    int y;
};

int main()
{
    std::cout << std::boolalpha
              << std::is_pointer_interconvertible_base_of_v<Bar, Baz> << '\n'
              << std::is_pointer_interconvertible_base_of_v<Foo, Baz> << '\n'
              << std::is_pointer_interconvertible_base_of_v<Baz, NonStdLayout> << '\n'
              << std::is_pointer_interconvertible_base_of_v<NonStdLayout, NonStdLayout> << '\n';
}
