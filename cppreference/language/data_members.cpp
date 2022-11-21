// cppreference link https://en.cppreference.com/w/cpp/language/data_members
#include <iostream>

int x = 0;
struct S {
    int n = ++x;
    S() { } // uses default member initializer
    S(int arg)
        : n(arg)
    {
    } // uses member initializer
};

int main()
{
    std::cout << x << '\n'; // prints 0
    S s1; // default initializer ran
    std::cout << x << '\n'; // prints 1
    S s2(7); // default initializer did not run
    std::cout << x << '\n'; // prints 1
}
