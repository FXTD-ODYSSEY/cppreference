// cppreference link https://en.cppreference.com/w/cpp/filesystem/copy_file
#include <filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::filesystem;

int main()
{
    fs::create_directory("sandbox");
    std::ofstream("sandbox/file1.txt").put('a');

    fs::copy_file("sandbox/file1.txt", "sandbox/file2.txt");

    // now there are two files in sandbox:
    std::cout << "file1.txt holds: "
              << std::ifstream("sandbox/file1.txt").rdbuf() << '\n';
    std::cout << "file2.txt holds: "
              << std::ifstream("sandbox/file2.txt").rdbuf() << '\n';

    // fail to copy directory
    fs::create_directory("sandbox/abc");
    try {
        fs::copy_file("sandbox/abc", "sandbox/def");
    } catch (fs::filesystem_error& e) {
        std::cout << "Could not copy sandbox/abc: " << e.what() << '\n';
    }
    fs::remove_all("sandbox");
}
