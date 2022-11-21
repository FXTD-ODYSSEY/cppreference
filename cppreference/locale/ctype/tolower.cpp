// cppreference link https://en.cppreference.com/w/cpp/locale/ctype/tolower
#include <iostream>
#include <locale>

void try_lower(const std::ctype<wchar_t>& f, wchar_t c)
{
    wchar_t up = f.tolower(c);
    if (up != c) {
        std::wcout << "Lower case form of \'" << c << "' is " << up << '\n';
    } else {
        std::wcout << '\'' << c << "' has no lower case form\n";
    }
}

int main()
{
    std::locale::global(std::locale("en_US.utf8"));
    std::wcout.imbue(std::locale());
    std::wcout << "In US English UTF-8 locale:\n";
    auto& f = std::use_facet<std::ctype<wchar_t>>(std::locale());
    try_lower(f, L'Σ');
    try_lower(f, L'Ɛ');
    try_lower(f, L'Ａ');

    std::wstring str = L"HELLo, wORLD!";
    std::wcout << "Lowercase form of the string '" << str << "' is ";
    f.tolower(&str[0], &str[0] + str.size());
    std::wcout << "'" << str << "'\n";
}
