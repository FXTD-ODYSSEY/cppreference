// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/resize_file
#include <experimental/filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::experimental::filesystem;
int main()
{
    fs::path p = fs::temp_directory_path() / "example.bin";
    std::ofstream(p).put('a');
    std::cout << "File size:  " << fs::file_size(p) << '\n'
              << "Free space: " << fs::space(p).free << '\n';
    fs::resize_file(p, 64 * 1024); // resize to 64 KB
    std::cout << "File size:  " << fs::file_size(p) << '\n'
              << "Free space: " << fs::space(p).free << '\n';
    fs::remove(p);
}
