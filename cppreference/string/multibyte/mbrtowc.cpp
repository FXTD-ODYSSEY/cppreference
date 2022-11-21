// cppreference link https://en.cppreference.com/w/cpp/string/multibyte/mbrtowc
#include <clocale>
#include <cstring>
#include <cwchar>
#include <iostream>

void print_mb(const char* ptr)
{
    std::mbstate_t state = std::mbstate_t(); // initial state
    const char* end = ptr + std::strlen(ptr);
    int len;
    wchar_t wc;
    while ((len = std::mbrtowc(&wc, ptr, end - ptr, &state)) > 0) {
        std::wcout << "Next " << len << " bytes are the character " << wc << '\n';
        ptr += len;
    }
}

int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    // UTF-8 narrow multibyte encoding
    const char* str = "z\u00df\u6c34\U0001d10b"; // or u8"zß水𝄋"
                                                 // or "\x7a\xc3\x9f\xe6\xb0\xb4\xf0\x9d\x84\x8b";
    print_mb(str);
}
