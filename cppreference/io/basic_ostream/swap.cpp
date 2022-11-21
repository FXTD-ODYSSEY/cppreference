// cppreference link https://en.cppreference.com/w/cpp/io/basic_ostream/swap
#include <iostream>
#include <sstream>
#include <utility>
int main()
{
    std::ostringstream s1("hello");
    std::ostringstream s2("bye");

    s1.swap(s2); // OK, ostringstream has a public swap()
    std::swap(s1, s2); // OK, calls s1.swap(s2)

    //  std::cout.swap(s2); // ERROR: swap is a protected member

    std::cout << s1.str() << '\n';
}
