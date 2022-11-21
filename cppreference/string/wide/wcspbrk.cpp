// cppreference link https://en.cppreference.com/w/cpp/string/wide/wcspbrk
#include <cwchar>
#include <iomanip>
#include <iostream>

int main()
{
    const wchar_t* str = L"Hello world, friend of mine!";
    const wchar_t* sep = L" ,!";

    unsigned int cnt = 0;
    do {
        str = std::wcspbrk(str, sep); // find separator
        std::wcout << std::quoted(str) << L'\n';
        if (str)
            str += std::wcsspn(str, sep); // skip separator
        ++cnt; // increment word count
    } while (str && *str);

    std::wcout << L"There are " << cnt << L" words\n";
}
