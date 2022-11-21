// cppreference link https://en.cppreference.com/w/cpp/types/is_polymorphic
#include <iostream>
#include <type_traits>

struct A {
    int m;
};

struct B {
    virtual void foo();
};

struct C : B { };

struct D {
    virtual ~D() = default;
};

int main()
{
    std::cout << std::boolalpha
              << std::is_polymorphic<A>::value << ' '
              << std::is_polymorphic<B>::value << ' '
              << std::is_polymorphic<C>::value << ' '
              << std::is_polymorphic<D>::value << '\n';
}
