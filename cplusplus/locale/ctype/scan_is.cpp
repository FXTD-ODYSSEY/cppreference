// cplusplus link https://cplusplus.com/reference/locale\ctype\scan_is
// ctype::scan_is example
#include <iostream> // std::cout
#include <locale> // std::locale, std::ctype, std::use_facet

int main()
{
    std::locale loc;

    const char quote[] = "Characters do not change. Opinions alter, but characters are only developed.";
    // (quoting Benjamin Disraeli)

    // get a pointer to the first "punctuation" character:
    const char* p = std::use_facet<std::ctype<char>>(loc).scan_is(std::ctype<char>::punct, quote, quote + 76);

    std::cout << "The second sentence is: " << p << '\n';

    return 0;
}
