// cplusplus link https://cplusplus.com/reference/sstream\basic_ostringstream\str
// ostringstream::rdbuf
#include <iostream> // std::cout
#include <sstream> // std::ostringstream
#include <string> // std::string

int main()
{
    std::ostringstream oss;
    oss << "One hundred and one: " << 101;
    std::string s = oss.str();
    std::cout << s << '\n';
    return 0;
}
