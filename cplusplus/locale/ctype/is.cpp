// cplusplus link https://cplusplus.com/reference/locale\ctype\is
// ctype::is example
#include <iostream> // std::cout, std::boolalpha
#include <locale> // std::locale, std::ctype, std::use_facet

int main()
{
    std::locale loc;
    const char quote[] = "It is wonderful how much may be done if we are always doing.";
    // (Attributed to Thomas Jefferson)

    std::cout << '"' << quote << "\"\n";

    // single character:
    std::cout << "The quote begins with an uppercase letter? ";
    std::cout << std::boolalpha;
    std::cout << std::use_facet<std::ctype<char>>(loc).is(std::ctype<char>::upper, quote[0]);
    std::cout << '\n';

    // sequence of characters:
    int cx = 0;
    std::ctype<char>::mask* masks = new std::ctype<char>::mask[60];
    std::use_facet<std::ctype<char>>(loc).is(quote, quote + 60, masks);
    for (int i = 0; i < 60; ++i)
        if (masks[i] & std::ctype<char>::space)
            ++cx;
    std::cout << "The quote has " << cx << " whitespaces.\n";
    return 0;
}
