// cplusplus link https://cplusplus.com/reference/regex\basic_regex\operator%3D
// basic_regex::operator=
// note: using regex, a standard alias of basic_regex<char>
#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string pattern("six");
    std::regex first;
    std::regex second(pattern, std::regex::icase);

    first = second; // copy assignment (flags preserved)
    second = "[0-9A-F]+"; // assigning string literal (flags reset)
    second = { '^', '.' }; // assigning initializer list (flags reset)
    second = pattern; // assigning string object (flags reset)

    std::string subject = "Sixty six";
    std::string replacement = "seven";

    std::cout << "first: " << std::regex_replace(subject, first, replacement);
    std::cout << std::endl;

    std::cout << "second: " << std::regex_replace(subject, second, replacement);
    std::cout << std::endl;

    return 0;
}
