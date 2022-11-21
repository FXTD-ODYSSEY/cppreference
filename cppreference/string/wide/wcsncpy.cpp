// cppreference link https://en.cppreference.com/w/cpp/string/wide/wcsncpy
#include <cwchar>
#include <iostream>

int main()
{
    const wchar_t src[] = L"hi";
    wchar_t dest[6] = { L'a', L'b', L'c', L'd', L'e', L'f' };

    std::wcsncpy(dest, src, 5); // this will copy 'hi' and repeat \0 three times

    std::wcout << "The contents of dest are: ";
    for (const wchar_t c : dest) {
        if (c)
            std::wcout << c << ' ';
        else
            std::wcout << "\\0" << ' ';
    }
    std::wcout << '\n';
}
