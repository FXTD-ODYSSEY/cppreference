// cplusplus link https://cplusplus.com/reference/sstream\stringbuf\stringbuf
// stringbuf example
#include <iostream> // std::cout, std::ostream, std::hex
#include <sstream> // std::stringbuf
#include <string> // std::string

int main()
{
    std::stringbuf buffer; // empty stringbuf

    std::ostream os(&buffer); // associate stream buffer to stream

    // mixing output to buffer with inserting to associated stream:
    buffer.sputn("255 in hexadecimal: ", 20);
    os << std::hex << 255;

    std::cout << buffer.str();

    return 0;
}
