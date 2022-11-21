// cppreference link https://en.cppreference.com/w/cpp/string/multibyte/wcrtomb
#include <clocale>
#include <cwchar>
#include <iostream>
#include <string>

void print_wide(const std::wstring& wstr)
{
    std::mbstate_t state {};
    for (wchar_t wc : wstr) {
        std::string mb(MB_CUR_MAX, '\0');
        std::size_t ret = std::wcrtomb(&mb[0], wc, &state);
        std::cout << "multibyte char " << mb << " is " << ret << " bytes\n";
    }
}

int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    std::wstring wstr = L"z\u00df\u6c34\U0001f34c"; // or L"zß水🍌"
    print_wide(wstr);
}
