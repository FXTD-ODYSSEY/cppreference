// cppreference link https://en.cppreference.com/w/cpp/string/multibyte/wcstombs
#include <clocale>
#include <cstdlib>
#include <iostream>

int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    // UTF-8 narrow multibyte encoding
    const wchar_t* wstr = L"z\u00df\u6c34\U0001d10b"; // or L"zß水𝄋"
    char mbstr[11];
    std::wcstombs(mbstr, wstr, 11);
    std::cout << "multibyte string: " << mbstr << '\n';
}
