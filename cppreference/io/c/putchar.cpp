// cppreference link https://en.cppreference.com/w/cpp/io/c/putchar
#include <cstdio>

int main()
{
    for (char c = 'a'; c != 'z'; c++)
        std::putchar(c);
    std::putchar('\n');

    // putchar return value is not equal to the argument
    int r = 0x1070;
    std::printf("\n0x%x\n", r);
    r = std::putchar(r);
    std::printf("\n0x%x\n", r);
}
