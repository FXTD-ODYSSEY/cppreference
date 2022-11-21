// cppreference link https://en.cppreference.com/w/cpp/locale/ctype/narrow
#include <iostream>
#include <locale>

void try_narrow(const std::ctype<wchar_t>& f, wchar_t c)
{
    char n = f.narrow(c, 0);
    if (n)
        std::wcout << '\'' << c << "' narrowed to " << +(unsigned char)n << '\n';
    else
        std::wcout << '\'' << c << "' could not be narrowed\n";
}

int main()
{
    std::locale::global(std::locale("en_US.utf8"));
    std::wcout.imbue(std::locale());
    std::wcout << std::hex << std::showbase << "In US English UTF-8 locale:\n";
    auto& f = std::use_facet<std::ctype<wchar_t>>(std::locale());
    try_narrow(f, L'A');
    try_narrow(f, L'Ａ');
    try_narrow(f, L'ě');

    std::locale::global(std::locale("cs_CZ.iso88592"));
    auto& f2 = std::use_facet<std::ctype<wchar_t>>(std::locale());
    std::wcout << "In Czech ISO-8859-2 locale:\n";
    try_narrow(f2, L'A');
    try_narrow(f2, L'Ａ');
    try_narrow(f2, L'ě');
}
