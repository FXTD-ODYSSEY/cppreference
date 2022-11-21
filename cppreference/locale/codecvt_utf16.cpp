// cppreference link https://en.cppreference.com/w/cpp/locale/codecvt_utf16
#include <codecvt>
#include <fstream>
#include <iostream>
#include <locale>
#include <string>

void prepare_file()
{
    // UTF-16le data (if host system is little-endian)
    char16_t utf16le[4] = { 0x007a, // latin small letter 'z' U+007a
        0x6c34, // CJK ideograph "water"  U+6c34
        0xd834, 0xdd0b }; // musical sign segno U+1d10b
    // store in a file
    std::ofstream fout("text.txt");
    fout.write(reinterpret_cast<char*>(utf16le), sizeof utf16le);
}

int main()
{
    prepare_file();
    // open as a byte stream
    std::wifstream fin("text.txt", std::ios::binary);
    // apply facet
    fin.imbue(std::locale(fin.getloc(),
        new std::codecvt_utf16<wchar_t, 0x10ffff, std::little_endian>));

    for (wchar_t c; fin.get(c);)
        std::cout << std::showbase << std::hex << c << '\n';
}
