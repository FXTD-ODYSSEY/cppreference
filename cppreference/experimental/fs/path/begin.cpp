// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/path/begin
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;
int main()
{
    fs::path p = "C:\\users\\abcdef\\AppData\\Local\\Temp\\";
    std::cout << "Examining the path " << p << " through iterators gives\n";
    for (auto& e : p)
        std::cout << e << '\n';
}
