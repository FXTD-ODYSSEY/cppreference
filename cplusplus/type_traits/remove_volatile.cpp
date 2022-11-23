// cplusplus link https://cplusplus.com/reference/type_traits\remove_volatile
// remove_volatile example
#include <iostream>
#include <type_traits>

int main()
{
    typedef volatile int vint;
    std::remove_volatile<vint>::type a; // int a
    std::remove_volatile<const volatile int>::type b = 0; // const int b
    std::remove_volatile<volatile int*>::type c; // volatile int* c
    std::remove_volatile<int* volatile>::type d; // int* d

    if (std::is_volatile<decltype(d)>::value)
        std::cout << "type of d is volatile" << std::endl;
    else
        std::cout << "type of d is not volatile" << std::endl;

    return 0;
}
