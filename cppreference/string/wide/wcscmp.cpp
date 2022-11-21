// cppreference link https://en.cppreference.com/w/cpp/string/wide/wcscmp
#include <algorithm>
#include <cwchar>
#include <iostream>
#include <vector>

int main()
{
    std::vector<const wchar_t*> leaders { L"Ленин", L"Сталин", L"Маленков",
        L"Хрущёв", L"Брежнев", L"Андропов", L"Черненко", L"Горбачёв" };

    std::sort(leaders.begin(), leaders.end(), [](auto strA, auto strB) {
        return std::wcscmp(strA, strB) < 0;
    });

    std::setlocale(LC_ALL, "en_US.utf8");
    std::wcout.imbue(std::locale("en_US.utf8"));
    for (auto leader : leaders)
        std::wcout << leader << '\n';
}
