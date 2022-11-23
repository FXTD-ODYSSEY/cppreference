// cplusplus link https://cplusplus.com/reference/sstream\basic_stringstream\basic_stringstream
// swapping ostringstream objects
#include <iostream> // std::cout
#include <sstream> // std::stringstream
#include <string> // std::string

int main()
{

    std::stringstream ss;

    ss << 100 << ' ' << 200;

    int foo, bar;
    ss >> foo >> bar;

    std::cout << "foo: " << foo << '\n';
    std::cout << "bar: " << bar << '\n';

    return 0;
}
