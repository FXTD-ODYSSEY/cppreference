// cppreference link https://en.cppreference.com/w/cpp/regex/ecmascript
#include <iostream>
#include <regex>
#include <string>

void show_matches(const std::wstring& in, const std::wstring& re)
{
    std::wsmatch m;
    std::regex_search(in, m, std::wregex(re));
    if (!m.empty()) {
        std::wcout << L"input=[" << in << L"], regex=[" << re << L"]\n  "
                                                                 L"prefix=["
                   << m.prefix() << L"]\n  wsmatch: ";
        for (std::size_t n = 0; n < m.size(); ++n)
            std::wcout << L"m[" << n << L"]=[" << m[n] << L"] ";
        std::wcout << L"\n  suffix=[" << m.suffix() << L"]\n";
    } else {
        std::wcout << L"input=[" << in << "], regex=[" << re << L"]: NO MATCH\n";
    }
}

int main()
{
    // Most escapes are similar to C++, save for metacharacters. You will have to
    // double-escape or use raw strings on the slashes though.
    show_matches(L"C++\\", LR"(C\+\+\\)");

    // Escape sequences and NUL.
    std::wstring s(L"ab\xff\0cd", 5);
    show_matches(s, L"(\\0|\\u00ff)");

    // No matching for non-BMP Unicode is defined, because ECMAScript uses UTF-16
    // atoms. Whether this emoji banana matches can be platform dependent:
    // These need to be wide-strings!
    show_matches(L"\U0001f34c", L"[\\u0000-\\ufffe]+");
}
