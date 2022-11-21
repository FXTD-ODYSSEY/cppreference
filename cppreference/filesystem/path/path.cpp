// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/path
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;
int main()
{
    fs::path p1 = "/usr/lib/sendmail.cf"; // portable format
    fs::path p2 = "C:\\users\\abcdef\\AppData\\Local\\Temp\\"; // native format
    fs::path p3 = U"D:/猫.txt"; // UTF-32 string
    fs::path p4 = u8"~/狗.txt"; // UTF-8 string

    std::cout << "p1 = " << p1 << '\n'
              << "p2 = " << p2 << '\n'
              << "p3 = " << p3 << '\n'
              << "p4 = " << p4 << '\n';
}
