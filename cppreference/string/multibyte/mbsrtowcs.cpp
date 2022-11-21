// cppreference link https://en.cppreference.com/w/cpp/string/multibyte/mbsrtowcs
#include <clocale>
#include <cwchar>
#include <iostream>
#include <vector>

void print_as_wide(const char* mbstr)
{
    std::mbstate_t state = std::mbstate_t();
    std::size_t len = 1 + std::mbsrtowcs(nullptr, &mbstr, 0, &state);
    std::vector<wchar_t> wstr(len);
    std::mbsrtowcs(&wstr[0], &mbstr, wstr.size(), &state);
    std::wcout << "Wide string: " << &wstr[0] << '\n'
               << "The length, including '\\0': " << wstr.size() << '\n';
}

int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    const char* mbstr = "z\u00df\u6c34\U0001f34c"; // or u8"zß水🍌"
    print_as_wide(mbstr);
}
