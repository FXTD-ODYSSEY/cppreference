// cplusplus link https://cplusplus.com/reference/sstream\ostringstream\rdbuf
// ostringstream::rdbuf
#include <iostream> // std::cout
#include <sstream> // std::ostringstream, std::stringbuf
#include <string> // std::string

int main()
{
    std::ostringstream oss;

    // using stringbuf directly
    std::stringbuf* pbuf = oss.rdbuf();
    pbuf->sputn("Sample string", 13);
    std::cout << pbuf->str();

    return 0;
}
