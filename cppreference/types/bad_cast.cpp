// cppreference link https://en.cppreference.com/w/cpp/types/bad_cast
#include <iostream>
#include <typeinfo>

struct Foo {
    virtual ~Foo() { }
};
struct Bar {
    virtual ~Bar() { std::cout << "~Bar\n"; }
};
struct Pub : Bar {
    ~Pub() override { std::cout << "~Pub\n"; }
};

int main()
{
    Pub pub;
    try {
        [[maybe_unused]] Bar& r1 = dynamic_cast<Bar&>(pub); // OK, upcast

        [[maybe_unused]] Foo& r2 = dynamic_cast<Foo&>(pub); // throws
    } catch (const std::bad_cast& e) {
        std::cout << "e.what(): " << e.what() << '\n';
    }
}
