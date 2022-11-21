// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/string
#include <clocale>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <locale>

int main()
{
    const char* const localeName = "ja_JP.utf-8";
    std::setlocale(LC_ALL, localeName);
    std::locale::global(std::locale(localeName));

    const std::filesystem::path p(u8"要らない.txt");
    std::ofstream(p) << "File contents";

    // native string representation can be used with OS APIs
    if (std::FILE* const f = std::fopen(p.string().c_str(), "r")) {
        int ch;
        while ((ch = fgetc(f)) != EOF)
            putchar(ch);

        std::fclose(f);
    }

    // multibyte and wide representation can be used for output
    std::cout << "\nFile name in narrow multibyte encoding: " << p.string() << '\n';

    // wstring() will throw in stdlibc++, see https://gcc.gnu.org/bugzilla/show_bug.cgi?id=102839
    std::wcout << "File name in wide encoding: " << p.wstring() << '\n';

    std::filesystem::remove(p);
}
