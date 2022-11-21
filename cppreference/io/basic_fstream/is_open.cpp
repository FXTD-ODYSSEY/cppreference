// cppreference link https://en.cppreference.com/w/cpp/io/basic_fstream/is_open
#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::string filename = "some_file";

    std::fstream fs(filename, std::ios::in);

    std::cout << std::boolalpha;
    std::cout << "fs.is_open() = " << fs.is_open() << '\n';

    if (!fs.is_open()) {
        fs.clear();
        fs.open(filename, std::ios::out);
        std::cout << "fs.is_open() = " << fs.is_open() << '\n';
    }
}
