// cppreference link https://en.cppreference.com/w/cpp/string/wide/iswdigit
#include <clocale>
#include <cwctype>
#include <iostream>
void test(wchar_t a3, wchar_t u3, wchar_t j3)
{
    std::wcout << std::boolalpha
               << "          '" << a3 << "'   '" << u3 << "'  '" << j3 << "'\n"
               << "iswdigit "
               << (bool)std::iswdigit(a3) << "  "
               << (bool)std::iswdigit(u3) << " "
               << (bool)std::iswdigit(j3) << '\n'
               << "jdigit:  "
               << (bool)std::iswctype(a3, std::wctype("jdigit")) << ' '
               << (bool)std::iswctype(u3, std::wctype("jdigit")) << ' '
               << (bool)std::iswctype(j3, std::wctype("jdigit")) << '\n';
}
int main()
{
    wchar_t a3 = L'3'; // the ASCII digit 3
    wchar_t u3 = L'三'; // the CJK numeral 3
    wchar_t j3 = L'３'; // the fullwidth digit 3

    std::setlocale(LC_ALL, "en_US.utf8");
    std::wcout << "In american locale:\n";
    test(a3, u3, j3);

    std::wcout << "\nIn japanese locale:\n";
    std::setlocale(LC_ALL, "ja_JP.utf8");
    test(a3, u3, j3);
}
