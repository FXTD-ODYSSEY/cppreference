// cppreference link https://en.cppreference.com/w/cpp/io/c/tmpnam
#include <cstdio>
#include <iostream>
#include <string>

int main()
{
    std::string name1 = std::tmpnam(nullptr);
    std::cout << "temporary file name: " << name1 << '\n';

    char name2[L_tmpnam];
    if (std::tmpnam(name2)) {
        std::cout << "temporary file name: " << name2 << '\n';
    }
}
