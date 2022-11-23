// cplusplus link https://cplusplus.com/reference/sstream\basic_stringstream\swap-free
// swapping stringstream objects
#include <iostream> // std::cout
#include <sstream> // std::stringstream
#include <string> // std::string

int main()
{

    std::stringstream foo;
    std::stringstream bar;

    foo << 100;
    bar << 200;

    swap(foo, bar);

    int val;

    foo >> val;
    std::cout << "foo: " << val << '\n';
    bar >> val;
    std::cout << "bar: " << val << '\n';

    return 0;
}
