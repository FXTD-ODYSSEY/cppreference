// cplusplus link https://cplusplus.com/reference/string\basic_string\reserve
// string::reserve
#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::string str;

    std::ifstream file("test.txt", std::ios::in | std::ios::ate);
    if (file) {
        std::ifstream::streampos filesize = file.tellg();
        str.reserve(filesize);

        file.seekg(0);
        while (!file.eof()) {
            str += file.get();
        }
        std::cout << str;
    }
    return 0;
}
