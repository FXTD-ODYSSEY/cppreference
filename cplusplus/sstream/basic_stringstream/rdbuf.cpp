// cplusplus link https://cplusplus.com/reference/sstream\basic_stringstream\rdbuf
// stringstream::rdbuf
#include <iostream> // std::cout
#include <sstream> // std::stringstream, std::stringbuf
#include <string> // std::string

int main()
{
    std::stringstream ss;

    // using stringbuf directly:
    std::stringbuf* pbuf = ss.rdbuf();
    pbuf->sputn("Example string", 13);

    char buffer[80];
    pbuf->sgetn(buffer, 80);

    std::cout << buffer;

    return 0;
}
