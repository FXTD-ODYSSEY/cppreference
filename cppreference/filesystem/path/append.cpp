// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/append
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;
int main()
{
    fs::path p1 = "C:";
    p1 /= "Users"; // does not insert a separator
    std::cout << "\"C:\" / \"Users\" == " << p1 << '\n';
    p1 /= "batman"; // inserts fs::path::preferred_separator, '\' on Windows
    std::cout << "\"C:\" / \"Users\" / \"batman\" == " << p1 << '\n';
}
