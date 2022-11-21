// cppreference link https://en.cppreference.com/w/cpp/locale/ctype_char/scan_not
#include <iostream>
#include <iterator>
#include <locale>

int main()
{
    auto& f = std::use_facet<std::ctype<char>>(std::locale());

    // skip leading whitespace
    char s1[] = "      \t\t\n  Test";
    const char* p1 = f.scan_not(std::ctype_base::space, std::begin(s1), std::end(s1));
    std::cout << "'" << p1 << "'\n";

    // skip leading digits
    char s2[] = "123456789abcd";
    const char* p2 = f.scan_not(std::ctype_base::digit, std::begin(s2), std::end(s2));
    std::cout << "'" << p2 << "'\n";
}
