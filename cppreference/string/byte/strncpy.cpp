// cppreference link https://en.cppreference.com/w/cpp/string/byte/strncpy
#include <cstring>
#include <iostream>

int main()
{
    const char* src = "hi";
    char dest[6] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    std::strncpy(dest, src, 5);

    std::cout << "The contents of dest are: ";
    for (char c : dest) {
        if (c) {
            std::cout << c << ' ';
        } else {
            std::cout << "\\0" << ' ';
        }
    }
    std::cout << '\n';
}
