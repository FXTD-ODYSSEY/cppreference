// cppreference link https://en.cppreference.com/w/cpp/string/multibyte/mbrlen
#include <clocale>
#include <cwchar>
#include <iostream>
#include <string>

int main()
{
    // allow mbrlen() to work with UTF-8 multibyte encoding
    std::setlocale(LC_ALL, "en_US.utf8");
    // UTF-8 narrow multibyte encoding
    std::string str = "水"; // or u8"\u6c34" or "\xe6\xb0\xb4"
    std::mbstate_t mb = std::mbstate_t();
    int len1 = std::mbrlen(&str[0], 1, &mb);
    if (len1 == -2) {
        std::cout << "The first 1 byte of " << str
                  << " is an incomplete multibyte char (mbrlen returns -2)\n";
    }
    int len2 = std::mbrlen(&str[1], str.size() - 1, &mb);
    std::cout << "The remaining " << str.size() - 1 << " bytes of " << str
              << " hold " << len2 << " bytes of the multibyte character\n";
    std::cout << "Attempting to call mbrlen() in the middle of " << str
              << " while in initial shift state returns "
              << (int)mbrlen(&str[1], str.size(), &mb) << '\n';
}
