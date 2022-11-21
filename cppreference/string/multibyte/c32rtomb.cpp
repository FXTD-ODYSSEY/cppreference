// cppreference link https://en.cppreference.com/w/cpp/string/multibyte/c32rtomb
#include <climits>
#include <clocale>
#include <cuchar>
#include <iomanip>
#include <iostream>
#include <string_view>

int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    std::u32string_view strv = U"zß水🍌"; // or z\u00df\u6c34\U0001F34C
    std::cout << "Processing " << strv.size() << " UTF-32 code units: [ ";
    for (char32_t c : strv)
        std::cout << std::showbase << std::hex << static_cast<int>(c) << ' ';
    std::cout << "]\n";

    std::mbstate_t state {};
    char out[MB_LEN_MAX] {};
    for (char32_t c : strv) {
        std::size_t rc = std::c32rtomb(out, c, &state);
        std::cout << static_cast<int>(c) << " converted to [ ";
        if (rc != (std::size_t)-1)
            for (unsigned char c8 : std::string_view { out, rc })
                std::cout << +c8 << ' ';
        std::cout << "]\n";
    }
}
