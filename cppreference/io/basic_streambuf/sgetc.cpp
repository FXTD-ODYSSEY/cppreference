// cppreference link https://en.cppreference.com/w/cpp/io/basic_streambuf/sgetc
#include <iostream>
#include <sstream>

int main()
{
    std::stringstream stream("Hello, world");
    std::cout << "sgetc() returned '" << (char)stream.rdbuf()->sgetc() << "'\n";
    std::cout << "peek() returned '" << (char)stream.peek() << "'\n";
    std::cout << "get() returned '" << (char)stream.get() << "'\n";
}
