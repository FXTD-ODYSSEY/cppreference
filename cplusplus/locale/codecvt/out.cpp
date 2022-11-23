// cplusplus link https://cplusplus.com/reference/locale\codecvt\out
// codecvt::out example
#include <cwchar> // std::mbstate_t
#include <iostream> // std::cout, std::getline, std::wcin
#include <locale> // std::locale, std::codecvt, std::use_facet
#include <string> // std::wstring

int main()
{
    typedef std::codecvt<wchar_t, char, std::mbstate_t> facet_type;

    std::locale mylocale;

    const facet_type& myfacet = std::use_facet<facet_type>(mylocale);

    std::wstring mywstring;
    std::cout << "Enter sentence: ";
    std::getline(std::wcin, mywstring);

    std::wstring::size_type length = mywstring.length();

    // prepare objects to be filled by codecvt::out :
    char* pstr = new char[length + 1]; // the destination buffer (might be too short)
    std::mbstate_t mystate = std::mbstate_t(); // the shift state object
    const wchar_t* pwc; // from_next
    char* pc; // to_next

    // call codecvt::out (translate characters):
    facet_type::result myresult = myfacet.out(mystate,
        mywstring.c_str(), mywstring.c_str() + length + 1, pwc,
        pstr, pstr + length + 1, pc);

    if (myresult == facet_type::ok)
        std::cout << "Translation successful: " << pstr << '\n';

    delete[] pstr;

    return 0;
}
