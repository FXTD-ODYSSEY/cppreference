// cppreference link https://en.cppreference.com/w/cpp/language/bit_field
#include <iostream>

struct S {
    // will usually occupy 2 bytes:
    // 3 bits: value of b1
    // 5 bits: unused
    // 2 bits: value of b2
    // 6 bits: unused
    unsigned char b1 : 3;
    unsigned char : 0; // start a new byte
    unsigned char b2 : 2;
};

int main()
{
    std::cout << sizeof(S) << '\n'; // usually prints 2
                                    // would usually print 1 if not for
                                    // the padding break in line 11
}
