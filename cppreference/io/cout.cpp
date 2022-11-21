// cppreference link https://en.cppreference.com/w/cpp/io/cout
#include <iostream>
struct Foo {
    int n;
    Foo()
    {
        std::cout << "static constructor\n";
    }
    ~Foo()
    {
        std::cout << "static destructor\n";
    }
};
Foo f; // static object
int main()
{
    std::cout << "main function\n";
}
