// cppreference link https://en.cppreference.com/w/cpp/chrono/c/wcsftime
#include <ctime>
#include <cwchar>
#include <iostream>
#include <locale>

int main()
{
    std::locale::global(std::locale("ja_JP.utf8"));
    std::time_t t = std::time(nullptr);
    wchar_t wstr[100];
    if (std::wcsftime(wstr, 100, L"%A%c", std::localtime(&t))) {
        std::wcout << wstr << '\n';
    }
}
