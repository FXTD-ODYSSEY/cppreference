// cppreference link https://en.cppreference.com/w/cpp/io/basic_streambuf/sputc
#include <iostream>
#include <sstream>

int main()
{
    std::ostringstream s;
    s.rdbuf()->sputc('a');
    std::cout << s.str() << '\n';
}
