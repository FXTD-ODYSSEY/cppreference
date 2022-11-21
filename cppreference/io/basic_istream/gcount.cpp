// cppreference link https://en.cppreference.com/w/cpp/io/basic_istream/gcount
#include <iostream>
#include <sstream>

int main()
{
    char x[20];
    std::istringstream stream("Hello World");

    stream.read(x, sizeof x);
    std::cout << "Characters extracted: " << stream.gcount();
}
