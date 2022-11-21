// cppreference link https://en.cppreference.com/w/cpp/io/basic_istream/tellg
#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string str = "Hello, world";
    std::istringstream in(str);
    std::string word;
    in >> word;
    std::cout << "After reading the word \"" << word
              << "\" tellg() returns " << in.tellg() << '\n';
}
