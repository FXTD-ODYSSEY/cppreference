// cplusplus link https://cplusplus.com/reference/regex\regex_token_iterator\operator-%3E
// regex_token_iterator example
#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string s("this subject has a submarine as a subsequence");
    std::regex e("\\b(sub)([^ ]*)"); // matches words beginning by "sub"

    std::regex_token_iterator<std::string::iterator> rend; // end-of-sequence iterator

    // iterate over second submatches of each match:
    std::regex_token_iterator<std::string::iterator> rit(s.begin(), s.end(), e, 2);

    while (rit != rend) {
        std::cout << rit->str() << std::endl;
        ++rit;
    }

    return 0;
}
