// cplusplus link https://cplusplus.com/reference/string\string\clear
// string::clear
#include <iostream>
#include <string>

int main()
{
    char c;
    std::string str;
    std::cout << "Please type some lines of text. Enter a dot (.) to finish:\n";
    do {
        c = std::cin.get();
        str += c;
        if (c == '\n') {
            std::cout << str;
            str.clear();
        }
    } while (c != '.');
    return 0;
}
