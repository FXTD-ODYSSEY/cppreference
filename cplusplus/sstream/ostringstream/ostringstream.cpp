// cplusplus link https://cplusplus.com/reference/sstream\ostringstream\ostringstream
// ostringstream constructor
#include <iostream> // std::cout, std::ios
#include <sstream> // std::ostringstream

int main()
{
    std::ostringstream foo; // out
    std::ostringstream bar(std::ostringstream::ate); // out|ate

    foo.str("Test string");
    bar.str("Test string");

    foo << 101;
    bar << 101;

    std::cout << foo.str() << '\n';
    std::cout << bar.str() << '\n';
    return 0;
}
