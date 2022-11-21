// cppreference link https://en.cppreference.com/w/cpp/regex/regex_iterator/regex_iterator
#include <iostream>
#include <regex>
#include <string_view>

int main()
{
    constexpr std::string_view str { "#ONE:*p=&Mass; #Two:MOV%rd,42" };
    const std::regex re("[a-w]");

    // create regex_iterator, overload (2)
    auto it = std::regex_iterator<std::string_view::iterator> {
        str.cbegin(), str.cend(),
        re // re is lvalue; if an immediate expression was used
           // instead, e.g. std::regex{"[a-z]"}, this would
           // produce an error - overload (4) is deleted
    };

    for (decltype(it) last /* overload (1) */; it != last; ++it)
        std::cout << (*it).str();
}
