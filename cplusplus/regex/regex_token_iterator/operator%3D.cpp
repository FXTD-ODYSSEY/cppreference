// cplusplus link https://cplusplus.com/reference/regex\regex_token_iterator\operator%3D
// regex_token_iterator::operator=
#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string s("this subject has a submarine as a subsequence");
    std::regex e("\\b(sub)([^ ]*)"); // matches words beginning by "sub"

    typedef std::regex_token_iterator<std::string::iterator> iterator_type;

    iterator_type rti, rend; // default constructor = end-of-sequence iterators

    std::cout << "entire matches:";
    for (rti = iterator_type(s.begin(), s.end(), e); rti != rend; ++rti)
        std::cout << " [" << *rti << "]";
    std::cout << std::endl;

    std::cout << "2nd submatches:";
    for (rti = iterator_type(s.begin(), s.end(), e, 2); rti != rend; ++rti)
        std::cout << " [" << *rti << "]";
    std::cout << std::endl;

    std::cout << "1st and 2nd submatches:";
    int submatches[] = { 1, 2 };
    for (rti = iterator_type(s.begin(), s.end(), e, submatches); rti != rend; ++rti)
        std::cout << " [" << *rti << "]";
    std::cout << std::endl;

    std::cout << "matches as splitters:";
    for (rti = iterator_type(s.begin(), s.end(), e, -1); rti != rend; ++rti)
        std::cout << " [" << *rti << "]";
    std::cout << std::endl;

    return 0;
}
