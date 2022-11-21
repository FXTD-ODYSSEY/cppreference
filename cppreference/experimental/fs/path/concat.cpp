// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/path/concat
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;
int main()
{
    fs::path p1; // empty path
    p1 += "var"; // does not insert a separator
    std::cout << "\"\" + \"var\" == " << p1 << '\n';
    p1 += "lib"; // does not insert a separator
    std::cout << "\"\" + \"var\" + \"lib\" == " << p1 << '\n';
}
