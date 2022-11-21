// cppreference link https://en.cppreference.com/w/cpp/string/multibyte/btowc
#include <clocale>
#include <cwchar>
#include <iostream>

void try_widen(char c)
{
    std::wint_t w = std::btowc(c);
    if (w != WEOF)
        std::cout << "The single-byte character " << +(unsigned char)c
                  << " widens to " << +w << '\n';
    else
        std::cout << "The single-byte character " << +(unsigned char)c
                  << " failed to widen\n";
}

int main()
{
    std::setlocale(LC_ALL, "lt_LT.iso88594");
    std::cout << std::hex << std::showbase << "In Lithuanian ISO-8859-4 locale:\n";
    try_widen('A');
    try_widen('\xdf'); // German letter ß (U+00df) in ISO-8859-4
    try_widen('\xf9'); // Lithuanian letter ų (U+0173) in ISO-8859-4

    std::setlocale(LC_ALL, "lt_LT.utf8");
    std::cout << "In Lithuanian UTF-8 locale:\n";
    try_widen('A');
    try_widen('\xdf');
    try_widen('\xf9');
}
