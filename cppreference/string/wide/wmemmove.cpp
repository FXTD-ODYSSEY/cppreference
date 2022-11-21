// cppreference link https://en.cppreference.com/w/cpp/string/wide/wmemmove
#include <clocale>
#include <cwchar>
#include <iostream>
#include <locale>

int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    std::wcout.imbue(std::locale("en_US.utf8"));

    wchar_t str[] = L"αβγδεζηθικλμνξοπρστυφχψω";
    std::wcout << str << '\n';
    std::wmemmove(str + 4, str + 3, 3); // copy from [δεζ] to [εζη]
    std::wcout << str << '\n';
}
