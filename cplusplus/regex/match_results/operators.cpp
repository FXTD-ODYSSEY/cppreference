// cplusplus link https://cplusplus.com/reference/regex\match_results\operators
// match_results comparisons
// - using cmatch, a standard alias of match_results<const char*>
#include <iostream>
#include <regex>

int main()
{
    std::cmatch m1, m2, m3;

    std::regex_search("a needle in the haystack", m1, std::regex("needle"));
    std::regex_search("a needle in the haystack", m2, std::regex("needle"));
    std::regex_search("the needle in a haystack", m3, std::regex("needle"));

    if (m1 == m2)
        std::cout << "m1 and m2 are equal\n";
    if (m2 != m3)
        std::cout << "m2 and m3 are not equal\n"; // prefix() don't match

    return 0;
}
