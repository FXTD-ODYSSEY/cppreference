// cppreference link https://en.cppreference.com/w/cpp/language/sizeof
#include <iostream>

struct Empty { };
struct Base {
    int a;
};
struct Derived : Base {
    int b;
};
struct Bit {
    unsigned bit : 1;
};
struct CharChar {
    char c;
    char c2;
};
struct CharCharInt {
    char c;
    char c2;
    int i;
};
struct IntCharChar {
    int i;
    char c;
    char c2;
};
struct CharIntChar {
    char c;
    int i;
    char c2;
};
struct CharShortChar {
    char c;
    short s;
    char c2;
};

int main()
{
    Empty e;
    Derived d;
    Base& b = d;
    [[maybe_unused]] Bit bit;
    int a[10];

    std::cout
        << "1) sizeof empty class:              " << sizeof e << '\n'
        << "2) sizeof pointer:                  " << sizeof &e << '\n'
        //    << "3) sizeof function:                 " << sizeof(void())   << '\n' // error
        //    << "4) sizeof incomplete type:          " << sizeof(int[])    << '\n' // error
        //    << "5) sizeof bit field:                " << sizeof bit.bit   << '\n' // error
        << "6) sizeof(Bit) class:               " << sizeof(Bit) << '\n'
        << "7) sizeof(int[10]) array of 10 int: " << sizeof(int[10]) << '\n'
        << "8) sizeof a        array of 10 int: " << sizeof a << '\n'
        << "9) length of array of 10 int:       " << ((sizeof a) / (sizeof *a)) << '\n'
        << "A) length of array of 10 int (2):   " << ((sizeof a) / (sizeof a[0])) << '\n'
        << "B) sizeof the Derived class:        " << sizeof d << '\n'
        << "C) sizeof the Derived through Base: " << sizeof b << '\n'
        << "D) sizeof(unsigned)                 " << sizeof(unsigned) << '\n'
        << "E) sizeof(int)                      " << sizeof(int) << '\n'
        << "F) sizeof(short)                    " << sizeof(short) << '\n'
        << "G) sizeof(char)                     " << sizeof(char) << '\n'
        << "H) sizeof(CharChar)                 " << sizeof(CharChar) << '\n'
        << "I) sizeof(CharCharInt)              " << sizeof(CharCharInt) << '\n'
        << "J) sizeof(IntCharChar)              " << sizeof(IntCharChar) << '\n'
        << "K) sizeof(CharIntChar)              " << sizeof(CharIntChar) << '\n'
        << "L) sizeof(CharShortChar)            " << sizeof(CharShortChar) << '\n';
}
