// cppreference link https://en.cppreference.com/w/cpp/string/wide/wmemchr
#include <clocale>
#include <cwchar>
#include <iostream>
#include <locale>

int main()
{
    const wchar_t str[] = L"诺不轻信，故人不负我\0诺不轻许，故我不负人。";
    wchar_t target = L'许';
    const std::size_t sz = sizeof str / sizeof *str;
    if (const wchar_t* result = std::wmemchr(str, target, sz)) {
        std::setlocale(LC_ALL, "en_US.utf8");
        std::wcout.imbue(std::locale("en_US.utf8"));
        std::wcout << "Found '" << target
                   << "' at position " << result - str << "\n";
    }
}
