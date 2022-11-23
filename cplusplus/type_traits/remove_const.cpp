// cplusplus link https://cplusplus.com/reference/type_traits\remove_const
// remove_const example
#include <iostream>
#include <type_traits>

int main()
{
    typedef const char cc;
    std::remove_const<cc>::type a; // char a
    std::remove_const<const char*>::type b; // const char* b
    std::remove_const<char* const>::type c; // char* c

    a = 'x';
    b = "remove_const";
    c = new char[10];

    std::cout << b << std::endl;

    return 0;
}
