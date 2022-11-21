// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/path/replace_extension
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;

int main()
{
    fs::path p = "/foo/bar.jpeg";
    std::cout << "Was: " << p << '\n';
    p.replace_extension(".jpg");
    std::cout << "Now: " << p << '\n';
}
