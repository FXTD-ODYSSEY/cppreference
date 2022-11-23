// cplusplus link https://cplusplus.com/reference/type_traits\make_unsigned
// make_unsigned
#include <iostream>
#include <type_traits>

enum ENUM1 { a,
    b,
    c };
enum class ENUM2 : char { a,
    b,
    c };

int main()
{
    typedef std::make_unsigned<int>::type A; // unsigned int
    typedef std::make_unsigned<unsigned>::type B; // unsigned int
    typedef std::make_unsigned<const unsigned>::type C; // const unsigned int
    typedef std::make_unsigned<ENUM1>::type D; // unsigned int
    typedef std::make_unsigned<ENUM2>::type E; // unsigned char

    std::cout << std::boolalpha;
    std::cout << "typedefs of unsigned int:" << std::endl;
    std::cout << "A: " << std::is_same<unsigned, A>::value << std::endl;
    std::cout << "B: " << std::is_same<unsigned, B>::value << std::endl;
    std::cout << "C: " << std::is_same<unsigned, C>::value << std::endl;
    std::cout << "D: " << std::is_same<unsigned, D>::value << std::endl;
    std::cout << "E: " << std::is_same<unsigned, E>::value << std::endl;

    return 0;
}
