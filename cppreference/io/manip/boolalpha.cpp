// cppreference link https://en.cppreference.com/w/cpp/io/manip/boolalpha
#include <iostream>
#include <locale>
#include <sstream>
int main()
{
    // boolalpha output
    std::cout << std::boolalpha
              << "boolalpha true: " << true << '\n'
              << "boolalpha false: " << false << '\n';
    std::cout << std::noboolalpha
              << "noboolalpha true: " << true << '\n'
              << "noboolalpha false: " << false << '\n';
    // boolalpha parse
    bool b1, b2;
    std::istringstream is("true false");
    is >> std::boolalpha >> b1 >> b2;
    std::cout << '\"' << is.str() << "\" parsed as " << b1 << ' ' << b2 << '\n';
}
