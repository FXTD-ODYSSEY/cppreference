// cppreference link https://en.cppreference.com/w/cpp/locale/setlocale
#include <clocale>
#include <cstdio>
#include <ctime>
#include <cwchar>
#include <iterator>
#include <string>

int main()
{
    // Make a "deep copy" of current locale name.
    std::string prev_loc = std::setlocale(LC_ALL, nullptr);

    // The C locale will be UTF-8 enabled English,
    // decimal dot will be German,
    // date and time formatting will be Japanese.
    if (const char* loc = std::setlocale(LC_ALL, "en_US.UTF-8"))
        std::wprintf(L"New LC_ALL locale:%s\n", loc);
    if (const char* loc = std::setlocale(LC_NUMERIC, "de_DE.UTF-8"))
        std::wprintf(L"New LC_NUMERIC locale:%s\n", loc);
    if (const char* loc = std::setlocale(LC_TIME, "ja_JP.UTF-8"))
        std::wprintf(L"New LC_TIME locale:%s\n", loc);

    wchar_t buf[100];
    std::time_t t = std::time(nullptr);
    std::wcsftime(buf, std::size(buf), L"%A%c", std::localtime(&t));
    std::wprintf(L"Number:%.2f\nDate:%Ls\n", 3.14, buf);

    // Restore the previous locale.
    if (const char* loc = std::setlocale(LC_ALL, prev_loc.c_str()))
        std::wprintf(L"Restorred LC_ALL locale:%s\n", loc);
}
