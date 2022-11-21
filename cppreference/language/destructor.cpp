// cppreference link https://en.cppreference.com/w/cpp/language/destructor
#include <iostream>

struct A {
    int i;

    A(int num)
        : i(num)
    {
        std::cout << "ctor a" << i << '\n';
    }

    ~A()
    {
        std::cout << "dtor a" << i << '\n';
    }
};

A a0(0);

int main()
{
    A a1(1);
    A* p;

    { // nested scope
        A a2(2);
        p = new A(3);
    } // a2 out of scope

    delete p; // calls the destructor of a3
}
