// cplusplus link https://cplusplus.com/reference/sstream\basic_ostringstream\swap-free
// swapping ostringstream objects
#include <iostream> // std::cout
#include <sstream> // std::ostringstream
#include <string> // std::string

int main()
{

    std::ostringstream foo;
    std::ostringstream bar;

    foo << 100;
    bar << 200;

    swap(foo, bar); // unqualified (uses argument-dependent lookup)

    std::cout << "foo: " << foo.str() << '\n';
    std::cout << "bar: " << bar.str() << '\n';

    return 0;
}
