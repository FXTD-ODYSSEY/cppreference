// cppreference link https://en.cppreference.com/w/cpp/string/wide/wcsncmp
#include <clocale>
#include <cwchar>
#include <iostream>
#include <locale>

void demo(const wchar_t* lhs, const wchar_t* rhs, int sz)
{
    int rc = std::wcsncmp(lhs, rhs, sz);
    if (rc == 0)
        std::wcout << "First " << sz << " characters of ["
                   << lhs << "] equal [" << rhs << "]\n";
    else if (rc < 0)
        std::wcout << "First " << sz << " characters of ["
                   << lhs << "] precede [" << rhs << "]\n";
    else if (rc > 0)
        std::wcout << "First " << sz << " characters of ["
                   << lhs << "] follow [" << rhs << "]\n";
}

int main()
{
    const wchar_t str1[] = L"안녕하세요";
    const wchar_t str2[] = L"안녕히 가십시오";

    std::setlocale(LC_ALL, "en_US.utf8");
    std::wcout.imbue(std::locale("en_US.utf8"));
    demo(str1, str2, 5);
    demo(str2, str1, 8);
    demo(str1, str2, 2);
}
