// cplusplus link https://cplusplus.com/reference/regex\basic_regex\basic_regex
// basic_regex constructors
// note: using regex, a standard alias of basic_regex<char>
#include <iostream>
#include <regex>
#include <string>

int main()
{

    std::string pattern = "^.*$";

    std::regex first; // default
    std::regex second = first; // copy
    std::regex third(pattern); // string object initialization
    std::regex fourth("<[^>]>"); // string literal initialization
    std::regex fifth(pattern.begin(), pattern.end()); // range initialization
    std::regex sixth { '.', '+' }; // initializer_list initialization

    std::regex seventh("[0-9A-Z]+", std::regex::ECMAScript); // with syntax option

    using namespace std::regex_constants; // introducing constants namespace
    std::regex eighth("[0-9A-Z]+", ECMAScript); // same as seventh

    std::regex ninth("\\bd\\w+", ECMAScript | icase); // multiple flags

    std::string subject = "Duddy the duck";
    std::string replacement = "yup";

    std::cout << std::regex_replace(subject, ninth, replacement);
    std::cout << std::endl;

    return 0;
}
