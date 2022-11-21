// cppreference link https://en.cppreference.com/w/cpp/string/multibyte/mblen
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string_view>

// the number of characters in a multibyte string is the sum of mblen()'s
// note: the simpler approach is std::mbstowcs(nullptr, s.c_str(), s.size())
std::size_t strlen_mb(const std::string_view s)
{
    std::size_t result = 0;
    const char* ptr = s.data();
    const char* end = ptr + s.size();
    std::mblen(nullptr, 0); // reset the conversion state
    while (ptr < end) {
        int next = std::mblen(ptr, end - ptr);
        if (next == -1) {
            throw std::runtime_error("strlen_mb(): conversion error");
        }
        ptr += next;
        ++result;
    }
    return result;
}

void dump_bytes(const std::string_view str)
{
    std::cout << std::hex << std::uppercase << std::setfill('0');
    for (unsigned char c : str)
        std::cout << std::setw(2) << static_cast<int>(c) << ' ';
    std::cout << std::dec << '\n';
}

int main()
{
    // allow mblen() to work with UTF-8 multibyte encoding
    std::setlocale(LC_ALL, "en_US.utf8");
    // UTF-8 narrow multibyte encoding
    const std::string_view str = "z\u00df\u6c34\U0001f34c"; // or u8"zß水🍌"
    std::cout << std::quoted(str) << " is " << strlen_mb(str)
              << " characters, but as much as " << str.size() << " bytes: ";
    dump_bytes(str);
}
