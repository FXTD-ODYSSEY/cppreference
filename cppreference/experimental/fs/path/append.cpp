// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/path/append
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;
int main()
{
    fs::path p1 = "C:";
    p1 /= "Users"; // does not insert a separator
                   // "C:Users" is a relative path in Windows
                   // adding directory separator would turn it to an absolute path
    std::cout << "\"C:\" / \"Users\" == " << p1 << '\n';
    p1 /= "batman"; // inserts fs::path::preferred_separator, '\' on Windows
    std::cout << "\"C:\" / \"Users\" / \"batman\" == " << p1 << '\n';
}
