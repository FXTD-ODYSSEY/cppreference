// cppreference link https://en.cppreference.com/w/cpp/types/make_signed
#include <iostream>
#include <type_traits>

int main()
{
    typedef std::make_signed<unsigned char>::type char_type;
    typedef std::make_signed<unsigned int>::type int_type;
    typedef std::make_signed<volatile unsigned long>::type long_type;

    bool ok1 = std::is_same<char_type, signed char>::value;
    bool ok2 = std::is_same<int_type, signed int>::value;
    bool ok3 = std::is_same<long_type, volatile signed long>::value;

    std::cout << std::boolalpha
              << "char_type is 'signed char'?         : " << ok1 << '\n'
              << "int_type  is 'signed int'?          : " << ok2 << '\n'
              << "long_type is 'volatile signed long'?: " << ok3 << '\n';
}
