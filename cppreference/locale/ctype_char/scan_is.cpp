// cppreference link https://en.cppreference.com/w/cpp/locale/ctype_char/scan_is
#include <iostream>
#include <iterator>
#include <locale>

int main()
{
    std::locale loc("");
    auto& f = std::use_facet<std::ctype<char>>(loc);

    // skip until the first letter
    char s1[] = "      \t\t\n  Test";
    const char* p1 = f.scan_is(std::ctype_base::alpha, std::begin(s1), std::end(s1));
    std::cout << "'" << p1 << "'\n";

    // skip until the first letter
    char s2[] = "123456789abcd";
    const char* p2 = f.scan_is(std::ctype_base::alpha, std::begin(s2), std::end(s2));
    std::cout << "'" << p2 << "'\n";
}
