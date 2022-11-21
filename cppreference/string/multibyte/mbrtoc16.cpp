// cppreference link https://en.cppreference.com/w/cpp/string/multibyte/mbrtoc16
#include <clocale>
#include <cstring>
#include <cuchar>
#include <cwchar>
#include <iomanip>
#include <iostream>

int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");

    std::string str = "z\u00df\u6c34\U0001F34C"; // or u8"zß水🍌"

    std::cout << "Processing " << str.size() << " bytes: [ " << std::showbase;
    for (unsigned char c : str)
        std::cout << std::hex << +c << ' ';
    std::cout << "]\n";

    std::mbstate_t state {}; // zero-initialized to initial state
    char16_t c16;
    const char *ptr = &str[0], *end = &str[0] + str.size();

    while (std::size_t rc = std::mbrtoc16(&c16, ptr, end - ptr + 1, &state)) {
        std::cout << "Next UTF-16 char: " << std::hex
                  << static_cast<int>(c16) << " obtained from ";
        if (rc == (std::size_t)-3)
            std::cout << "earlier surrogate pair\n";
        else if (rc == (std::size_t)-2)
            break;
        else if (rc == (std::size_t)-1)
            break;
        else {
            std::cout << std::dec << rc << " bytes [ ";
            for (std::size_t n = 0; n < rc; ++n)
                std::cout << std::hex << +static_cast<unsigned char>(ptr[n]) << ' ';
            std::cout << "]\n";
            ptr += rc;
        }
    }
}
