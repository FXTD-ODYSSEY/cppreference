// cplusplus link https://cplusplus.com/reference/sstream\istringstream\swap
// swapping istringstream objects
#include <iostream> // std::cout
#include <sstream> // std::istringstream
#include <string> // std::string

int main()
{

    std::istringstream foo("100");
    std::istringstream bar("200");

    foo.swap(bar);

    int val;

    foo >> val;
    std::cout << "foo: " << val << '\n';
    bar >> val;
    std::cout << "bar: " << val << '\n';

    return 0;
}
