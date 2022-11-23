// cplusplus link https://cplusplus.com/reference/regex\basic_regex\flags
// basic_regex::flags
// note: using regex, a standard alias of basic_regex<char>
#include <iostream>
#include <regex>

int main()
{
    using namespace std::regex_constants;
    std::regex first("[a-z]+");
    std::regex second("[a-z]+", ECMAScript | icase);

    std::cout << "first ";
    std::cout << ((first.flags() & icase) == icase ? "is" : "is not");
    std::cout << " case insensitive.\n";

    std::cout << "second ";
    std::cout << ((second.flags() & icase) == icase ? "is" : "is not");
    std::cout << " case insensitive.\n";

    return 0;
}
