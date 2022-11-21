// cppreference link https://en.cppreference.com/w/cpp/string/wide/iswctype
#include <clocale>
#include <cwctype>
#include <iostream>
bool classify(wchar_t wc, const std::string& cat)
{
    return std::iswctype(wc, std::wctype(cat.c_str()));
}
int main()
{
    std::setlocale(LC_ALL, "ja_JP.UTF-8");
    std::cout << "The character \u6c34 is...\n";
    for (std::string s : { "digit", "alpha", "space", "cntrl", "jkanji" })
        std::cout << s << "? " << std::boolalpha << classify(L'\u6c34', s) << '\n';
}
