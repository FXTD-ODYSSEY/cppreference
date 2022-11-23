// cplusplus link https://cplusplus.com/reference/istream\ws
// ws manipulator example
#include <iostream> // std::cout, std::noskipws
#include <sstream> // std::istringstream, std::ws

int main()
{
    char a[10], b[10];

    std::istringstream iss("one \n \t two");
    iss >> std::noskipws;
    iss >> a >> std::ws >> b;
    std::cout << a << ", " << b << '\n';

    return 0;
}
