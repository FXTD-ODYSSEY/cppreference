// cppreference link https://en.cppreference.com/w/cpp/string/wide/wmemcpy
#include <clocale>
#include <cwchar>
#include <iostream>
#include <iterator>
#include <locale>

int main(void)
{
    const wchar_t from1[] = L"नमस्ते";
    const wchar_t from2[] = L"Բարև";
    const std::size_t sz1 = std::size(from1);
    const std::size_t sz2 = std::size(from2);
    wchar_t to[sz1 + sz2];

    std::wmemcpy(to, from1, sz1); // copy from1, along with its null terminator
    std::wmemcpy(to + sz1, from2, sz2); // append from2, along with its null terminator

    std::setlocale(LC_ALL, "en_US.utf8");
    std::wcout.imbue(std::locale("en_US.utf8"));
    std::wcout << L"Wide array contains: ";
    for (std::size_t n = 0; n < std::size(to); ++n)
        if (to[n])
            std::wcout << to[n];
        else
            std::wcout << L"\\0";
    std::wcout << L'\n';
}
