// cppreference link https://en.cppreference.com/w/cpp/string/multibyte/wctob
#include <clocale>
#include <cwchar>
#include <iostream>

void try_narrowing(wchar_t c)
{
    int cn = std::wctob(c);
    if (cn != EOF)
        std::cout << '\'' << int(c) << "' narrowed to " << +cn << '\n';
    else
        std::cout << '\'' << int(c) << "' could not be narrowed\n";
}

int main()
{
    std::setlocale(LC_ALL, "th_TH.utf8");
    std::cout << std::hex << std::showbase << "In Thai UTF-8 locale:\n";
    try_narrowing(L'a');
    try_narrowing(L'๛');

    std::setlocale(LC_ALL, "th_TH.tis620");
    std::cout << "In Thai TIS-620 locale:\n";
    try_narrowing(L'a');
    try_narrowing(L'๛');
}
