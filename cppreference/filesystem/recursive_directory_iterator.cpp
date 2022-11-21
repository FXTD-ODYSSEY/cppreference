// cppreference link https://en.cppreference.com/w/cpp/filesystem/recursive_directory_iterator
#include <filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::filesystem;

int main()
{
    fs::current_path(fs::temp_directory_path());
    fs::create_directories("sandbox/a/b");
    std::ofstream("sandbox/file1.txt");
    fs::create_symlink("a", "sandbox/syma");

    // Iterate over the `std::filesystem::directory_entry` elements explicitly
    for (const fs::directory_entry& dir_entry :
        fs::recursive_directory_iterator("sandbox")) {
        std::cout << dir_entry << '\n';
    }
    std::cout << "-----------------------------\n";
    // Iterate over the `std::filesystem::directory_entry` elements using `auto`
    for (auto const& dir_entry : fs::recursive_directory_iterator("sandbox")) {
        std::cout << dir_entry << '\n';
    }

    fs::remove_all("sandbox");
}
