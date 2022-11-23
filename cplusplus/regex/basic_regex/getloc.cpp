// cplusplus link https://cplusplus.com/reference/regex\basic_regex\getloc
// basic_regex::getloc
// note: using regex, a standard alias of basic_regex<char>
#include <iostream>
#include <locale>
#include <regex>

int main()
{
    std::regex myregex;
    std::locale mylocale("");
    myregex.imbue(mylocale);
    myregex.assign("sub[a-z]*");

    if (std::regex_match("subject", myregex))
        std::cout << "The string matches";
    else
        std::cout << "The string does not match";

    std::cout << " using locale: " << myregex.getloc().name() << std::endl;

    return 0;
}
