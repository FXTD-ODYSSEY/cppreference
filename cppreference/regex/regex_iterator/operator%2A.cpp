// cppreference link https://en.cppreference.com/w/cpp/regex/regex_iterator/operator*
#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::regex expression("[1234]");
    std::string searchStr("1.1a2b3cjk34");

    for (std::regex_iterator<std::string::iterator> it {
             searchStr.begin(), searchStr.end(), expression },
         last {};
         it != last; ++it) {
        std::cout << it->str();
    }
}
