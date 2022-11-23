// cplusplus link https://cplusplus.com/reference/type_traits\add_volatile
// add_volatile example
#include <iostream>
#include <type_traits>

int main()
{
    typedef std::add_volatile<int>::type A; // volatile int
    typedef std::add_volatile<volatile int>::type B; // volatile int     (unchanged)
    typedef std::add_volatile<int* volatile>::type C; // int* volatile    (unchanged)
    typedef std::add_volatile<volatile int*>::type D; // volatile int* volatile
    typedef std::add_volatile<volatile int&>::type E; // volatile int&    (unchanged)

    std::cout << std::boolalpha;
    std::cout << "checking volatileness:" << std::endl;
    std::cout << "A: " << std::is_volatile<A>::value << std::endl;
    std::cout << "B: " << std::is_volatile<B>::value << std::endl;
    std::cout << "C: " << std::is_volatile<C>::value << std::endl;
    std::cout << "D: " << std::is_volatile<D>::value << std::endl;
    std::cout << "E: " << std::is_volatile<E>::value << std::endl;

    return 0;
}
