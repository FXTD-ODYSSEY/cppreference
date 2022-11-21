// cppreference link https://en.cppreference.com/w/cpp/io/basic_ifstream/is_open
#include <fstream>
#include <iostream>
#include <string>
// this file is called main.cpp

bool file_exists(const std::string& str)
{
    std::ifstream fs(str);
    return fs.is_open();
}

int main()
{
    std::boolalpha(std::cout);
    std::cout << file_exists("main.cpp") << '\n'
              << file_exists("strange_file") << '\n';
}
