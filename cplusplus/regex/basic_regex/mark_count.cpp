// cplusplus link https://cplusplus.com/reference/regex\basic_regex\mark_count
// basic_regex::mark_count
// note: using regex, a standard alias of basic_regex<char>
#include <iostream>
#include <regex>

int main()
{
    std::regex myregex("(sub)([a-z]*).*");
    std::cout << "The pattern captures " << myregex.mark_count() << " sub-expressions.\n";

    std::cmatch m;
    regex_match("subject", m, myregex);

    if (m.size() == myregex.mark_count() + 1) {
        std::cout << "Ok, all sub-expressions captured.\n";
        std::cout << "Matched expression: " << m[0] << "\n";
        for (unsigned i = 1; i < m.size(); ++i)
            std::cout << "Sub-expression " << i << ": " << m[i] << "\n";
    }

    return 0;
}
