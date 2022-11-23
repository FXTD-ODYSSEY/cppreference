// cplusplus link https://cplusplus.com/reference/regex\match_results\str
// match_results::str
// - using cmatch, a standard alias of match_results<const char*>
#include <iostream>
#include <regex>
#include <string>

int main()
{
    using namespace std::regex_constants;

    std::cmatch m;

    std::regex_match("subject", m, std::regex("(sub)(.*)"));

    std::string output = "matches:\n";
    for (unsigned i = 0; i < m.size(); ++i) {
        output += m.str(i) + "\n";
    }

    std::cout << output << std::endl;

    return 0;
}
