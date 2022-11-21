// cppreference link https://en.cppreference.com/w/cpp/string/wide/wmemcmp
#include <clocale>
#include <cwchar>
#include <iostream>
#include <locale>
#include <string>

void demo(const wchar_t* lhs, const wchar_t* rhs, std::size_t sz)
{
    std::wcout << std::wstring(lhs, sz);
    int rc = std::wmemcmp(lhs, rhs, sz);
    if (rc == 0)
        std::wcout << " compares equal to ";
    else if (rc < 0)
        std::wcout << " precedes ";
    else if (rc > 0)
        std::wcout << " follows ";
    std::wcout << std::wstring(rhs, sz) << " in lexicographical order\n";
}

int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    std::wcout.imbue(std::locale("en_US.utf8"));

    wchar_t a1[] = { L'α', L'β', L'γ' };
    constexpr std::size_t sz = sizeof a1 / sizeof *a1;
    wchar_t a2[sz] = { L'α', L'β', L'δ' };

    demo(a1, a2, sz);
    demo(a2, a1, sz);
    demo(a1, a1, sz);
}
