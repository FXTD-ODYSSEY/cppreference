// cplusplus link https://cplusplus.com/reference/new\operator%20delete
// operator delete example
#include <iostream> // std::cout

struct MyClass {
    MyClass() { std::cout << "MyClass constructed\n"; }
    ~MyClass() { std::cout << "MyClass destroyed\n"; }
};

int main()
{
    MyClass* pt = new (std::nothrow) MyClass;
    delete pt; // implicitly calls ::operator delete(pt)

    return 0;
}
