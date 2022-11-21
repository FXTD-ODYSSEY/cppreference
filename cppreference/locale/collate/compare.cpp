// cppreference link https://en.cppreference.com/w/cpp/locale/collate/compare
#include <iostream>
#include <locale>
#include <string>

template <typename CharT>
void try_compare(const std::locale& l, const CharT* p1, const CharT* p2)
{
    auto& f = std::use_facet<std::collate<CharT>>(l);

    std::basic_string<CharT> s1(p1), s2(p2);
    if (f.compare(&s1[0], &s1[0] + s1.size(),
            &s2[0], &s2[0] + s2.size())
        < 0)
        std::wcout << p1 << " before " << p2 << '\n';
    else
        std::wcout << p2 << " before " << p1 << '\n';
}

int main()
{
    std::locale::global(std::locale("en_US.utf8"));
    std::wcout.imbue(std::locale());

    std::wcout << "In the American locale: ";
    try_compare(std::locale(), "hrnec", "chrt");
    std::wcout << "In the Czech locale: ";
    try_compare(std::locale("cs_CZ.utf8"), "hrnec", "chrt");

    std::wcout << "In the American locale: ";
    try_compare(std::locale(), L"år", L"ängel");
    std::wcout << "In the Swedish locale: ";
    try_compare(std::locale("sv_SE.utf8"), L"år", L"ängel");
}
