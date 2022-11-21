// cppreference link https://en.cppreference.com/w/cpp/locale/isdigit
#include <iostream>
#include <locale>
#include <set>
#include <string>

struct jdigit_ctype : std::ctype<wchar_t> {
    std::set<wchar_t> jdigits { L'一', L'二', L'三', L'四', L'五', L'六', L'七', L'八', L'九', L'十' };
    bool do_is(mask m, char_type c) const
    {
        if ((m & digit) && jdigits.count(c))
            return true; // Japanese digits will be classified as digits
        return ctype::do_is(m, c); // leave the rest to the parent class
    }
};

int main()
{

    std::wstring text = L"123一二三１２３";
    std::locale loc(std::locale(""), new jdigit_ctype);

    std::locale::global(std::locale(""));
    std::wcout.imbue(std::locale());

    for (wchar_t c : text)
        if (std::isdigit(c, loc))
            std::wcout << c << " is a digit\n";
        else
            std::wcout << c << " is NOT a digit\n";
}
