// cplusplus link https://cplusplus.com/reference/string\basic_string\c_str
// strings and c-strings
#include <cstring>
#include <iostream>
#include <string>

int main()
{
    std::string str("Please split this sentence into tokens");

    char* cstr = new char[str.length() + 1];
    std::strcpy(cstr, str.c_str());

    // cstr now contains a c-string copy of str

    char* p = std::strtok(cstr, " ");
    while (p != 0) {
        std::cout << p << '\n';
        p = strtok(NULL, " ");
    }

    delete[] cstr;
    return 0;
}
