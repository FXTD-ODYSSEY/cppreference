// cppreference link https://en.cppreference.com/w/cpp/string/wide/iswspace
#include <clocale>
#include <cwctype>
#include <iostream>
void try_with(wchar_t c, const char* loc)
{
    std::setlocale(LC_ALL, loc);
    std::wcout << "isspace('" << c << "') in " << loc << " locale returned "
               << std::boolalpha << (bool)std::iswspace(c) << '\n';
}
int main()
{
    wchar_t EM_SPACE = L'\u2003'; // Unicode character 'EM SPACE'
    try_with(EM_SPACE, "C");
    try_with(EM_SPACE, "en_US.UTF8");
}
