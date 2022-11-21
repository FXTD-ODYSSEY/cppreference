// cppreference link https://en.cppreference.com/w/cpp/io/basic_fstream/close
#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::fstream f1("example1", std::ios::out),
        f2("example2", std::ios::out),
        f3("example3", std::ios::out);

    std::cout << std::boolalpha
              << f1.is_open() << '\n'
              << f2.is_open() << '\n'
              << f3.is_open() << '\n';

    f1.close();
    f2.close();

    std::cout << f1.is_open() << '\n'
              << f2.is_open() << '\n'
              << f3.is_open() << '\n';
}
