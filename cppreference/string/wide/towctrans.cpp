// cppreference link https://en.cppreference.com/w/cpp/string/wide/towctrans
#include <algorithm>
#include <clocale>
#include <cwctype>
#include <iostream>

std::wstring tohira(std::wstring str)
{
    std::transform(str.begin(), str.end(), str.begin(), [](wchar_t c) {
        return std::towctrans(c, std::wctrans("tojhira"));
    });
    return str;
}

int main()
{
    std::setlocale(LC_ALL, "ja_JP.UTF-8");
    std::wstring kana = L"ヒラガナ";
    std::wcout << "katakana characters " << kana
               << " are " << tohira(kana) << " in hiragana\n";
}
