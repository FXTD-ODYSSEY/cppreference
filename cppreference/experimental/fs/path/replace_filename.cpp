// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/path/replace_filename
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;

int main()
{

    std::cout << fs::path("/foo").replace_filename("bar") << '\n'
              << fs::path("/").replace_filename("bar") << '\n';
}
