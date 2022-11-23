// cplusplus link https://cplusplus.com/reference/type_traits\add_const
// add_const example
#include <iostream>
#include <type_traits>

int main()
{
    typedef std::add_const<int>::type A; // const int
    typedef std::add_const<const int>::type B; // const int     (unchanged)
    typedef std::add_const<const int*>::type C; // const int* const
    typedef std::add_const<int* const>::type D; // int* const    (unchanged)
    typedef std::add_const<const int&>::type E; // const int&    (unchanged)

    std::cout << std::boolalpha;
    std::cout << "checking constness:" << std::endl;
    std::cout << "A: " << std::is_const<A>::value << std::endl;
    std::cout << "B: " << std::is_const<B>::value << std::endl;
    std::cout << "C: " << std::is_const<C>::value << std::endl;
    std::cout << "D: " << std::is_const<D>::value << std::endl;
    std::cout << "E: " << std::is_const<E>::value << std::endl;

    return 0;
}
