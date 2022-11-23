// cplusplus link https://cplusplus.com/reference/regex\regex_error
// regex_error
#include <iostream>
#include <regex>

int main()
{
    try {
        std::regex myregex("*");
    } catch (std::regex_error& e) {
        if (e.code() == std::regex_constants::error_badrepeat)
            std::cerr << "Repeat was not preceded by a valid regular expression.\n";
        else
            std::cerr << "Some other regex exception happened.\n";
    }
    return 0;
}
