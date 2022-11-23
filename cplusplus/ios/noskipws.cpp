// cplusplus link https://cplusplus.com/reference/ios\noskipws
// skipws flag example
#include <iostream> // std::cout, std::skipws, std::noskipws
#include <sstream> // std::istringstream

int main()
{
    char a, b, c;

    std::istringstream iss("  123");
    iss >> std::skipws >> a >> b >> c;
    std::cout << a << b << c << '\n';

    iss.seekg(0);
    iss >> std::noskipws >> a >> b >> c;
    std::cout << a << b << c << '\n';
    return 0;
}
