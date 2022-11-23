// cplusplus link https://cplusplus.com/reference/regex\regex_token_iterator\operator%2B%2B
// regex_iterator example
#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string s("this subject has a submarine as a subsequence");
    std::regex e("\\b(sub)([^ ]*)"); // matches words beginning by "sub"

    std::regex_iterator<std::string::iterator> rit(s.begin(), s.end(), e);
    std::regex_iterator<std::string::iterator> rend;

    while (rit != rend) {
        std::cout << rit->str() << std::endl;
        ++rit;
    }

    return 0;
}
