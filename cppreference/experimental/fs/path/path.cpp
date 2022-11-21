// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/path/path
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;
int main()
{
    fs::path p1 = "/usr/lib/sendmail.cf"; // portable format
    fs::path p2 = "C:\\users\\abcdef\\AppData\\Local\\Temp\\"; // native format
    fs::path p3 = L"D:/猫.txt"; // wide string

    std::cout << "p1 = " << p1 << '\n'
              << "p2 = " << p2 << '\n'
              << "p3 = " << p3 << '\n';
}
