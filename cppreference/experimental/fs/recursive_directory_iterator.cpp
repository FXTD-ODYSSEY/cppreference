// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/recursive_directory_iterator
#include <experimental/filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::experimental::filesystem;

int main()
{
    fs::create_directories("sandbox/a/b");
    std::ofstream("sandbox/file1.txt");
    fs::create_symlink("a", "sandbox/syma");
    for (const fs::directory_entry& entry : fs::recursive_directory_iterator("sandbox"))
        std::cout << entry << '\n';
    fs::remove_all("sandbox");
}
