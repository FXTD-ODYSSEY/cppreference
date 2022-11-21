// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/path/remove_filename
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;

int main()
{

    std::cout << fs::path("/foo").remove_filename() << '\n'
              << fs::path("/").remove_filename() << '\n';
}
