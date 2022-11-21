// cppreference link https://en.cppreference.com/w/cpp/string/wide/wcstoul
#include <cwchar>
#include <errno.h>
#include <iostream>
#include <string>

int main()
{
    const wchar_t* p = L"10 200000000000000000000000000000 30 40";
    wchar_t* end;
    std::wcout << "Parsing L'" << p << "':\n";
    for (unsigned long i = std::wcstoul(p, &end, 10);
         p != end;
         i = std::wcstoul(p, &end, 10)) {
        std::wcout << "'" << std::wstring(p, end - p) << "' -> ";
        p = end;
        if (errno == ERANGE) {
            std::wcout << "range error, got ";
            errno = 0;
        }
        std::wcout << i << '\n';
    }
}
