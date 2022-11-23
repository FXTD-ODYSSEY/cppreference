// cplusplus link https://cplusplus.com/reference/regex\match_results\empty
// match_results::empty
// - using smatch, a standard alias of match_results<string::iterator>
#include <iostream>
#include <regex>
#include <string>

int main()
{
    using namespace std::regex_constants;

    std::string s("Subject");
    std::regex e1("sub.*");
    std::regex e2("sub.*", ECMAScript | icase);

    std::smatch m1, m2;

    std::regex_match(s, m1, e1);
    std::regex_match(s, m2, e2);

    std::cout << "e1 " << (m1.empty() ? "did not match" : "matched") << std::endl;
    std::cout << "e2 " << (m2.empty() ? "did not match" : "matched") << std::endl;

    return 0;
}
