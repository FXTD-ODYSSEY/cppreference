// cppreference link https://en.cppreference.com/w/cpp/io/basic_ios/tie
#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ofstream os("test.txt");
    std::ifstream is("test.txt");
    std::string value("0");

    os << "Hello";
    is >> value;

    std::cout << "Result before tie(): \"" << value << "\"\n";
    is.clear();
    is.tie(&os);

    is >> value;

    std::cout << "Result after tie(): \"" << value << "\"\n";
}
