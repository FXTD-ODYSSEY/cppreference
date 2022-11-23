// cplusplus link https://cplusplus.com/reference/type_traits\is_function
// is_function example
#include <iostream>
#include <type_traits>

int a(int i) { return i; } // function
int (*b)(int) = a; // pointer to function
struct C {
    int operator()(int i) { return i; }
} c; // function-like class

int main()
{
    std::cout << std::boolalpha;
    std::cout << "is_function:" << std::endl;
    std::cout << "decltype(a): " << std::is_function<decltype(a)>::value << std::endl;
    std::cout << "decltype(b): " << std::is_function<decltype(b)>::value << std::endl;
    std::cout << "decltype(c): " << std::is_function<decltype(c)>::value << std::endl;
    std::cout << "C: " << std::is_function<C>::value << std::endl;
    std::cout << "int(int): " << std::is_function<int(int)>::value << std::endl;
    std::cout << "int(*)(int): " << std::is_function<int (*)(int)>::value << std::endl;
    return 0;
}
