// cplusplus link https://cplusplus.com/reference/string\basic_string\push_back
// string::push_back
#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::ifstream file("test.txt", std::ios::in);
    if (file) {
        while (!file.eof())
            str.push_back(file.get());
    }
    std::cout << str << '\n';
    return 0;
}
