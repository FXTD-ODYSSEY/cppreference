// cppreference link https://en.cppreference.com/w/cpp/regex/regex_traits/value
#include <iostream>
#include <locale>
#include <map>
#include <regex>

// This custom regex traits allows japanese numerals
struct jnum_traits : std::regex_traits<wchar_t> {
    static std::map<wchar_t, int> data;
    int value(wchar_t ch, int radix) const
    {
        wchar_t up = std::toupper(ch, getloc());
        return data.count(up) ? data[up] : regex_traits::value(ch, radix);
    }
};
std::map<wchar_t, int> jnum_traits::data = { { L'〇', 0 }, { L'一', 1 }, { L'二', 2 },
    { L'三', 3 }, { L'四', 4 }, { L'五', 5 },
    { L'六', 6 }, { L'七', 7 }, { L'八', 8 },
    { L'九', 9 }, { L'Ａ', 10 }, { L'Ｂ', 11 },
    { L'Ｃ', 12 }, { L'Ｄ', 13 }, { L'Ｅ', 14 },
    { L'Ｆ', 15 } };
int main()
{
    std::locale::global(std::locale("ja_JP.utf8"));
    std::wcout.sync_with_stdio(false);
    std::wcout.imbue(std::locale());

    std::wstring in = L"風";

    if (std::regex_match(in, std::wregex(L"\\u98a8")))
        std::wcout << "\\u98a8 matched " << in << '\n';

    if (std::regex_match(in, std::basic_regex<wchar_t, jnum_traits>(L"\\u九八ａ八")))
        std::wcout << L"\\u九八ａ八 with custom traits matched " << in << '\n';
}
