// cplusplus link https://cplusplus.com/reference/locale\codecvt\length
// codecvt::length example
#include <cstddef> // std::size_t
#include <cwchar> // std::mbstate_t
#include <iostream> // std::wcout, std::endl
#include <locale> // std::locale, std::codecvt, std::use_facet

int main()
{
    typedef std::codecvt<wchar_t, char, std::mbstate_t> facet_type;

    std::locale loc;
    const facet_type& myfacet = std::use_facet<facet_type>(loc);

    const char source[] = "abcdefghijklmnopqrstuvwxyz";

    // prepare objects for codecvt::length:
    std::mbstate_t mystate;
    const char* pc;
    wchar_t* pwc;

    // calculate length of dest (max 30):
    std::size_t length = myfacet.length(mystate, source, source + sizeof(source), 30);

    wchar_t* dest = new wchar_t[length];
    myfacet.in(mystate, source, source + sizeof(source), pc, dest, dest + length, pwc);

    std::wcout << dest << std::endl;

    delete[] dest;

    return 0;
}
