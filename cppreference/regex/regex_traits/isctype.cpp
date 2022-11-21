// cppreference link https://en.cppreference.com/w/cpp/regex/regex_traits/isctype
#include <cwctype>
#include <iostream>
#include <locale>
#include <regex>

// This custom regex traits uses wctype/iswctype to implement lookup_classname/isctype
struct wctype_traits : std::regex_traits<wchar_t> {
    using char_class_type = std::wctype_t;
    template <class It>
    char_class_type lookup_classname(It first, It last, bool = false) const
    {
        return std::wctype(std::string(first, last).c_str());
    }
    bool isctype(wchar_t c, char_class_type f) const
    {
        return std::iswctype(c, f);
    }
};

int main()
{
    std::locale::global(std::locale("ja_JP.utf8"));
    std::wcout.sync_with_stdio(false);
    std::wcout.imbue(std::locale());

    std::wsmatch m;
    std::wstring in = L"風の谷のナウシカ";
    // matches all characters (they are classified as alnum)
    std::regex_search(in, m, std::wregex(L"([[:alnum:]]+)"));
    std::wcout << "alnums: " << m[1] << '\n'; // prints "風の谷のナウシカ"
    // matches only the katakana
    std::regex_search(in, m,
        std::basic_regex<wchar_t, wctype_traits>(L"([[:jkata:]]+)"));
    std::wcout << "katakana: " << m[1] << '\n'; // prints "ナウシカ"
}
