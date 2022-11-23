// cplusplus link https://cplusplus.com/reference/regex\match_results\end
// match_results::begin/end
// - using smatch, a standard alias of match_results<string::iterator>
#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string s("subject");
    std::smatch m;
    std::regex e("(sub)(.*)");

    std::regex_match(s, m, e);

    std::cout << "matches:" << std::endl;
    for (std::smatch::iterator it = m.begin(); it != m.end(); ++it) {
        std::cout << *it << std::endl;
    }
    return 0;
}
