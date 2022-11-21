// cppreference link https://en.cppreference.com/w/cpp/memory/shared_ptr/operator*
#include <iostream>
#include <memory>

struct Foo {
    Foo(int in)
        : a(in)
    {
    }
    void print() const
    {
        std::cout << "a = " << a << '\n';
    }
    int a;
};

int main()
{
    auto ptr = std::make_shared<Foo>(10);
    ptr->print();
    (*ptr).print();
}
