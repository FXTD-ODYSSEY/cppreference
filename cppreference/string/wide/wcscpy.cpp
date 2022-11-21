// cppreference link https://en.cppreference.com/w/cpp/string/wide/wcscpy
#include <clocale>
#include <cwchar>
#include <iostream>
#include <memory>

int main()
{
    const wchar_t* src = L"犬 means dog";
    //  src[0] = L'狗'; // can't modify string literal
    auto dst = std::make_unique<wchar_t[]>(std::wcslen(src) + 1); // +1 for the null
    std::wcscpy(dst.get(), src);
    dst[0] = L'狗';
    std::setlocale(LC_ALL, "en_US.utf8");
    std::wcout.imbue(std::locale(""));
    std::wcout << src << '\n'
               << dst.get() << '\n';
}
