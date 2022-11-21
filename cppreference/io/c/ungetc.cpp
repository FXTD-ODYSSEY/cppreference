// cppreference link https://en.cppreference.com/w/cpp/io/c/ungetc
#include <cctype>
#include <cstdio>

void demo_scanf(const char* fmt, std::FILE* s)
{
    while (*fmt != '\0') {
        if (*fmt == '%') {
            switch (*++fmt) {
            case 'u': {
                int c {};
                while (std::isspace(c = std::getc(s))) { }
                unsigned int num {};
                while (std::isdigit(c)) {
                    num = num * 10 + c - '0';
                    c = std::getc(s);
                }
                std::printf("%%u scanned%u\n", num);
                std::ungetc(c, s);
                break;
            }
            case 'c': {
                int c = std::getc(s);
                std::printf("%%c scanned '%c'\n", c);
                break;
            }
            }
        } else {
            ++fmt;
        }
    }
}

int main()
{
    if (std::FILE* f = std::fopen("input.txt", "w+")) {
        std::fputs("123x", f);
        std::rewind(f);
        demo_scanf("%u%c", f);
        std::fclose(f);
    }
}
