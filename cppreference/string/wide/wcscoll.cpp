// cppreference link https://en.cppreference.com/w/cpp/string/wide/wcscoll
#include <clocale>
#include <iostream>

void try_compare(const wchar_t* p1, const wchar_t* p2)
{
    if (std::wcscoll(p1, p2) < 0)
        std::wcout << p1 << " before " << p2 << '\n';
    else
        std::wcout << p2 << " before " << p1 << '\n';
}

int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    std::wcout << "In the American locale: ";
    try_compare(L"hrnec", L"chrt");

    std::setlocale(LC_COLLATE, "cs_CZ.utf8");
    std::wcout << "In the Czech locale: ";
    try_compare(L"hrnec", L"chrt");

    std::setlocale(LC_COLLATE, "en_US.utf8");
    std::wcout << "In the American locale: ";
    try_compare(L"år", L"ängel");

    std::setlocale(LC_COLLATE, "sv_SE.utf8");
    std::wcout << "In the Swedish locale: ";
    try_compare(L"år", L"ängel");
}
