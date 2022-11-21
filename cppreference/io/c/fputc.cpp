// cppreference link https://en.cppreference.com/w/cpp/io/c/fputc
#include <cstdio>

int main()
{
    for (char c = 'a'; c != 'z'; c++)
        std::putc(c, stdout);
    std::putc('\n', stdout);

    // putchar return value is not equal to the argument
    int r = 0x1070;
    std::printf("\n0x%x\n", r);
    r = std::putchar(r);
    std::printf("\n0x%x\n", r);
}
