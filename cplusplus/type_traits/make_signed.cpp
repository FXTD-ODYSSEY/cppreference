// cplusplus link https://cplusplus.com/reference/type_traits\make_signed
// make_signed
#include <iostream>
#include <type_traits>

enum ENUM1 { a,
    b,
    c };
enum class ENUM2 : unsigned char { x,
    y,
    z };

int main()
{
    typedef std::make_signed<int>::type A; // int
    typedef std::make_signed<unsigned>::type B; // int
    typedef std::make_signed<const unsigned>::type C; // const int
    typedef std::make_signed<ENUM1>::type D; // int
    typedef std::make_signed<ENUM2>::type E; // signed char

    std::cout << std::boolalpha;
    std::cout << "typedefs of int:" << std::endl;
    std::cout << "A: " << std::is_same<int, A>::value << std::endl;
    std::cout << "B: " << std::is_same<int, B>::value << std::endl;
    std::cout << "C: " << std::is_same<int, C>::value << std::endl;
    std::cout << "D: " << std::is_same<int, D>::value << std::endl;
    std::cout << "E: " << std::is_same<int, E>::value << std::endl;

    return 0;
}
