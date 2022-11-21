// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/filename
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

int main()
{
    std::cout
        << fs::path("/foo/bar.txt").filename() << '\n'
        << fs::path("/foo/.bar").filename() << '\n'
        << fs::path("/foo/bar/").filename() << '\n'
        << fs::path("/foo/.").filename() << '\n'
        << fs::path("/foo/..").filename() << '\n'
        << fs::path(".").filename() << '\n'
        << fs::path("..").filename() << '\n'
        << fs::path("/").filename() << '\n'
        << fs::path("//host").filename() << '\n';
}
