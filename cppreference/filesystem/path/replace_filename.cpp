// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/replace_filename
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

int main()
{
    std::cout << fs::path("/foo").replace_filename("bar") << '\n'
              << fs::path("/").replace_filename("bar") << '\n'
              << fs::path("").replace_filename("pub") << '\n';
}
