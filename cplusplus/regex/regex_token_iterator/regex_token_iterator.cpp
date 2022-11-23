// cplusplus link https://cplusplus.com/reference/regex\regex_token_iterator\regex_token_iterator
// regex_token_iterator example
#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string s("this subject has a submarine as a subsequence");
    std::regex e("\\b(sub)([^ ]*)"); // matches words beginning by "sub"

    // default constructor = end-of-sequence:
    std::regex_token_iterator<std::string::iterator> rend;

    std::cout << "entire matches:";
    std::regex_token_iterator<std::string::iterator> a(s.begin(), s.end(), e);
    while (a != rend)
        std::cout << " [" << *a++ << "]";
    std::cout << std::endl;

    std::cout << "2nd submatches:";
    std::regex_token_iterator<std::string::iterator> b(s.begin(), s.end(), e, 2);
    while (b != rend)
        std::cout << " [" << *b++ << "]";
    std::cout << std::endl;

    std::cout << "1st and 2nd submatches:";
    int submatches[] = { 1, 2 };
    std::regex_token_iterator<std::string::iterator> c(s.begin(), s.end(), e, submatches);
    while (c != rend)
        std::cout << " [" << *c++ << "]";
    std::cout << std::endl;

    std::cout << "matches as splitters:";
    std::regex_token_iterator<std::string::iterator> d(s.begin(), s.end(), e, -1);
    while (d != rend)
        std::cout << " [" << *d++ << "]";
    std::cout << std::endl;

    return 0;
}
