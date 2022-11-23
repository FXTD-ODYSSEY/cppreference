// cplusplus link https://cplusplus.com/reference/regex\match_results\size
// match_results::size
// - using smatch, a standard alias of match_results<string::iterator>
#include <iostream>
#include <regex>

int main()
{
    std::string mystring("subject");
    std::smatch mymatches;
    std::regex myregex("(sub)(.*)");

    std::regex_match(mystring, mymatches, myregex);

    std::cout << mymatches.size() << " matches found:" << std::endl;
    for (unsigned i = 0; i < mymatches.size(); ++i)
        std::cout << "match #" << i << ": " << mymatches[i] << std::endl;

    return 0;
}
