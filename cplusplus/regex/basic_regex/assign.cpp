// cplusplus link https://cplusplus.com/reference/regex\basic_regex\assign
// basic_regex::assign
// note: using regex, a standard alias of basic_regex<char>
#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string pattern("six");
    std::regex first;
    std::regex second(pattern);

    first.assign(second);
    second.assign("[0-9A-F]+", std::regex::ECMAScript);
    second.assign({ '^', 'a' }, std::regex::ECMAScript | std::regex::icase);

    using namespace std::regex_constants; // introducing constants
    second.assign(pattern, ECMAScript | icase);

    std::string subject = "Sixty six";
    std::string replacement = "seven";

    std::cout << "first: " << std::regex_replace(subject, first, replacement);
    std::cout << std::endl;

    std::cout << "second: " << std::regex_replace(subject, second, replacement);
    std::cout << std::endl;

    return 0;
}
