// cplusplus link https://cplusplus.com/reference/type_traits\decay
// decay example
#include <iostream>
#include <type_traits>

typedef std::decay<int>::type A; // int
typedef std::decay<int&>::type B; // int
typedef std::decay<int&&>::type C; // int
typedef std::decay<const int&>::type D; // int
typedef std::decay<int[2]>::type E; // int*
typedef std::decay<int(int)>::type F; // int(*)(int)

typedef int X[3];

int main()
{
    std::cout << std::boolalpha;
    std::cout << "typedefs of int:" << std::endl;
    std::cout << "A: " << std::is_same<int, A>::value << std::endl;
    std::cout << "B: " << std::is_same<int, B>::value << std::endl;
    std::cout << "C: " << std::is_same<int, C>::value << std::endl;
    std::cout << "D: " << std::is_same<int, D>::value << std::endl;
    std::cout << "E: " << std::is_same<int, E>::value << std::endl;
    std::cout << "F: " << std::is_same<int, F>::value << std::endl;

    return 0;
}
