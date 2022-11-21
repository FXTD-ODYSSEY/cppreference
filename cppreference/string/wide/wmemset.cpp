// cppreference link https://en.cppreference.com/w/cpp/string/wide/wmemset
#include <clocale>
#include <cwchar>
#include <iostream>
#include <locale>

int main()
{
    wchar_t ar[4] = { L'1', L'2', L'3', L'4' };
    std::wmemset(ar, L'\U0001f34c', 2); // replaces [12] with the 🍌 bananas
    std::wmemset(ar + 2, L'蕉', 2); // replaces [34] with the 蕉 bananas

    std::setlocale(LC_ALL, "en_US.utf8");
    std::wcout.imbue(std::locale("en_US.utf8"));
    std::wcout << std::wstring(ar, 4) << '\n';
}
