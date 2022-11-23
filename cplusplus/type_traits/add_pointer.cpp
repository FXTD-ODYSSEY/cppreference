// cplusplus link https://cplusplus.com/reference/type_traits\add_pointer
// add_pointer
#include <iostream>
#include <type_traits>

typedef std::add_pointer<int>::type A; // int*
typedef std::add_pointer<const int>::type B; // const int*
typedef std::add_pointer<int&>::type C; // int*
typedef std::add_pointer<int*>::type D; // int**
typedef std::add_pointer<int(int)>::type E; // int(*)(int)

typedef int X[3];

int main()
{
    std::cout << std::boolalpha;
    std::cout << "typedefs of int*:" << std::endl;
    std::cout << "A: " << std::is_same<int*, A>::value << std::endl;
    std::cout << "B: " << std::is_same<int*, B>::value << std::endl;
    std::cout << "C: " << std::is_same<int*, C>::value << std::endl;
    std::cout << "D: " << std::is_same<int*, D>::value << std::endl;
    std::cout << "E: " << std::is_same<int*, E>::value << std::endl;

    return 0;
}
