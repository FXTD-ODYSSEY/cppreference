// cppreference link https://en.cppreference.com/w/cpp/io/c/rewind
#include <cstdio>

int main()
{
    std::FILE* f;
    char ch;
    char str[20];

    f = std::fopen("file.txt", "w");
    for (ch = '0'; ch <= '9'; ch++) {
        std::fputc(ch, f);
    }
    std::fclose(f);

    std::FILE* f2 = std::fopen("file.txt", "r");
    unsigned int size = std::fread(str, 1, 10, f2);
    std::puts(str);
    std::printf("\n%u\n", size);

    std::rewind(f2);
    unsigned int size2 = std::fread(str, 1, 10, f2);
    std::puts(str);
    std::printf("\n%u", size2);
    std::fclose(f2);
}
