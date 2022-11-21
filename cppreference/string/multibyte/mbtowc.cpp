// cppreference link https://en.cppreference.com/w/cpp/string/multibyte/mbtowc
#include <clocale>
#include <cstdlib>
#include <cstring>
#include <iostream>

int print_mb(const char* ptr)
{
    std::mbtowc(nullptr, 0, 0); // reset the conversion state
    const char* end = ptr + std::strlen(ptr);
    int ret;
    for (wchar_t wc; (ret = std::mbtowc(&wc, ptr, end - ptr)) > 0; ptr += ret) {
        std::wcout << wc;
    }
    std::wcout << '\n';
    return ret;
}

int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    // UTF-8 narrow multibyte encoding
    const char* str = "z\u00df\u6c34\U0001d10b"; // or u8"zß水𝄋"
                                                 // or "\x7a\xc3\x9f\xe6\xb0\xb4\xf0\x9d\x84\x8b";
    print_mb(str);
}
