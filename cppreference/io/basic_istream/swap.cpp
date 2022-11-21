// cppreference link https://en.cppreference.com/w/cpp/io/basic_istream/swap
#include <iostream>
#include <sstream>
#include <utility>
int main()
{
    std::istringstream s1("hello");
    std::istringstream s2("bye");

    s1.swap(s2); // OK, istringstream has a public swap()
    std::swap(s1, s2); // OK, calls s1.swap(s2)
    //  std::cin.swap(s2); // ERROR: swap is a protected member

    std::cout << s1.rdbuf();
}
