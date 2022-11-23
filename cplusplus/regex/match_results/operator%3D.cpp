// cplusplus link https://cplusplus.com/reference/regex\match_results\operator%3D
// match_results::operator=
// - using cmatch, a standard alias of match_results<const char*>
#include <iostream>
#include <regex>

int main()
{
    std::cmatch m1, m2;

    std::regex_match("subject", m1, std::regex("(sub)(.*)"));

    m2 = m1; // copy assignment

    for (unsigned i = 0; i < m2.size(); ++i)
        std::cout << "match " << i << ": " << m2[i] << std::endl;

    return 0;
}
