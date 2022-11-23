// cplusplus link https://cplusplus.com/reference/sstream\stringstream\str
// stringstream::str
#include <iostream> // std::cout
#include <sstream> // std::stringstream, std::stringbuf
#include <string> // std::string

int main()
{
    std::stringstream ss;
    ss.str("Example string");
    std::string s = ss.str();
    std::cout << s << '\n';
    return 0;
}
