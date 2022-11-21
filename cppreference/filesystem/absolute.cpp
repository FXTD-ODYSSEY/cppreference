// cppreference link https://en.cppreference.com/w/cpp/filesystem/absolute
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

int main()
{
    std::filesystem::path p = "foo.c";
    std::cout << "Current path is " << std::filesystem::current_path() << '\n';
    std::cout << "Absolute path for " << p << " is " << fs::absolute(p) << '\n';
}
