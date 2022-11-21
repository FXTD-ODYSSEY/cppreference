// cppreference link https://en.cppreference.com/w/cpp/string/wide/wcstof
#include <cerrno>
#include <clocale>
#include <cwchar>
#include <iostream>
#include <string>

int main()
{
    const wchar_t* p = L"111.11 -2.22 0X1.BC70A3D70A3D7P+6 -Inf 1.18973e+4932zzz";
    wchar_t* end;
    std::wcout << "Parsing L\"" << p << "\":\n";
    for (double f = std::wcstod(p, &end); p != end; f = std::wcstod(p, &end)) {
        std::wcout << "  '" << std::wstring(p, end - p) << "' -> ";
        p = end;
        if (errno == ERANGE) {
            std::wcout << "range error, got ";
            errno = 0;
        }
        std::wcout << f << '\n';
    }

    if (std::setlocale(LC_NUMERIC, "de_DE.utf8")) {
        std::wcout << L"With de_DE.utf8 locale:\n";
        std::wcout << L"  '123.45' -> " << std::wcstod(L"123.45", 0) << L'\n';
        std::wcout << L"  '123,45' -> " << std::wcstod(L"123,45", 0) << L'\n';
    }
}
