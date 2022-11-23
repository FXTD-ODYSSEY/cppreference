// cplusplus link https://cplusplus.com/reference/locale\codecvt\in
// codecvt::in example
#include <cwchar> // std::mbstate_t
#include <iostream> // std::wcout, std::wcout
#include <locale> // std::locale, std::codecvt, std::use_facet
#include <string> // std::wstring

int main()
{
    typedef std::codecvt<wchar_t, char, std::mbstate_t> facet_type;

    std::locale mylocale;

    const facet_type& myfacet = std::use_facet<facet_type>(mylocale);

    const char mystr[] = "Test string";

    // prepare objects to be filled by codecvt::in :
    wchar_t pwstr[sizeof(mystr)]; // the destination buffer (might be too short)
    std::mbstate_t mystate = std::mbstate_t(); // the shift state object
    const char* pc; // from_next
    wchar_t* pwc; // to_next

    // translate characters:
    facet_type::result myresult = myfacet.in(mystate,
        mystr, mystr + sizeof(mystr), pc,
        pwstr, pwstr + sizeof(mystr), pwc);

    if (myresult == facet_type::ok) {
        std::wcout << L"Translation successful: ";
        std::wcout << pwstr << std::endl;
    }
    return 0;
}
