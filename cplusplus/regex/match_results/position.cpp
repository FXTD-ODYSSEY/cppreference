// cplusplus link https://cplusplus.com/reference/regex\match_results\position
// match_results::position
// * using smatch, a standard alias of match_results<string::iterator>
#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string s("test subject");
    std::smatch m;
    std::regex e("(sub)(.*)");

    std::regex_search(s, m, e);

    for (unsigned i = 0; i < m.size(); ++i) {
        std::cout << "match " << i << " (" << m[i] << ") ";
        std::cout << "at position " << m.position(i) << std::endl;
    }

    return 0;
}
