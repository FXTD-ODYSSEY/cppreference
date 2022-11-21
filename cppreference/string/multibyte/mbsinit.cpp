// cppreference link https://en.cppreference.com/w/cpp/string/multibyte/mbsinit
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
    (void)std::mbrlen(&str[0], 1, &mb);
    if (!std::mbsinit(&mb)) {
        std::cout << "After processing the first 1 byte of " << str
                  << " the conversion state is not initial\n";
    }

    (void)std::mbrlen(&str[1], str.size() - 1, &mb);
    if (std::mbsinit(&mb)) {
        std::cout << "After processing the remaining 2 bytes of " << str
                  << ", the conversion state is initial conversion state\n";
    }
}
