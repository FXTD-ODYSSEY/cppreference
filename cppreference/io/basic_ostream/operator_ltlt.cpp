// cppreference link https://en.cppreference.com/w/cpp/io/basic_ostream/operator_ltlt
#include <iomanip>
#include <iostream>
#include <sstream>

int fun() { return 42; }

int main()
{
    std::istringstream input(" \"Some text.\" ");
    double f = 3.14;
    bool b = true;
    std::cout
        << fun() // int overload (2)
        << ' ' // non-member overload
        << std::boolalpha // function overload (11)
        << b // bool overload (6)
        << " " // non-member overload
        << std::fixed // function overload (11) again
        << f // double overload (5)
        << input.rdbuf() // streambuf overload
        << fun // bool overload (6): there's no overload for int(*)()
        << std::endl; // function overload (11) again

    int x = 0;
    int* p1 = &x;
    volatile int* p2 = &x;
    std::cout
        << "p1: " << p1 << '\n' // `const void*` overload, prints address
        << "p2: " << p2 << '\n'; // before C++23 (P1147): bool overload:), because
                                 // operator<<(const void*) is not a match, as it discards the `volatile`
                                 // qualifier. To fix this, C++23 adds `const volatile void*` overload,
                                 // that prints the address as expected.
}
