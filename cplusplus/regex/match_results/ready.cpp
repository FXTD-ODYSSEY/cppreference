// cplusplus link https://cplusplus.com/reference/regex\match_results\ready
// match_results::ready
// - using smatch, a standard alias of match_results<string::iterator>
#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string mystring("subject");
    std::smatch mymatch;
    std::regex myregex("sub.*");

    std::cout << std::boolalpha;
    std::cout << "mymatch.ready() is " << mymatch.ready() << std::endl;

    std::regex_match(mystring, mymatch, myregex);
    std::cout << "attempting match..." << std::endl;

    std::cout << "mymatch.ready() is " << mymatch.ready() << std::endl;

    if (mymatch.ready())
        std::cout << "matched: " << mymatch[0] << std::endl;

    return 0;
}
