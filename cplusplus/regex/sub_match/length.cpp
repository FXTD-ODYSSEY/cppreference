// cplusplus link https://cplusplus.com/reference/regex\sub_match\length
// sub_match::length
#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string s("subject");
    std::smatch m;
    std::regex e("(sub)(.*)");

    std::regex_match(s, m, e);

    for (unsigned i = 0; i < m.size(); ++i) {
        std::cout << "match " << i << " (" << m[i] << ")";
        std::cout << " has a length of " << m[i].length() << std::endl;
    }
    return 0;
}
