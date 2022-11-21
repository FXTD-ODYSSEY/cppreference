// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/begin
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;
int main()
{
    const fs::path p =
#ifdef _WIN32
        "C:\\users\\abcdef\\AppData\\Local\\Temp\\";
#else
        "/home/user/.config/Cppcheck/Cppcheck-GUI.conf";
#endif
    std::cout << "Examining the path " << p << " through iterators gives\n";
    for (auto it = p.begin(); it != p.end(); ++it)
        std::cout << *it << " │ ";
    std::cout << '\n';
}
