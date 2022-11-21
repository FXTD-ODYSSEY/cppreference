// cppreference link https://en.cppreference.com/w/cpp/locale/ctype/widen
#include <iostream>
#include <locale>

void try_widen(const std::ctype<wchar_t>& f, char c)
{
    wchar_t w = f.widen(c);
    std::cout << "The single-byte character " << +(unsigned char)c
              << " widens to " << +w << '\n';
}

int main()
{
    std::locale::global(std::locale("cs_CZ.iso88592"));
    auto& f = std::use_facet<std::ctype<wchar_t>>(std::locale());
    std::cout << std::hex << std::showbase << "In Czech ISO-8859-2 locale:\n";
    try_widen(f, 'a');
    try_widen(f, '\xdf'); // German letter ß (U+00df) in ISO-8859-2
    try_widen(f, '\xec'); // Czech letter ě (U+011b) in ISO-8859-2

    std::locale::global(std::locale("cs_CZ.utf8"));
    auto& f2 = std::use_facet<std::ctype<wchar_t>>(std::locale());
    std::cout << "In Czech UTF-8 locale:\n";
    try_widen(f2, 'a');
    try_widen(f2, '\xdf');
    try_widen(f2, '\xec');
}
