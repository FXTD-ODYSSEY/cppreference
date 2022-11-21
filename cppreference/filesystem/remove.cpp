// cppreference link https://en.cppreference.com/w/cpp/filesystem/remove
#include <cstdint>
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

int main()
{
    fs::path tmp = std::filesystem::temp_directory_path();
    std::filesystem::create_directories(tmp / "abcdef/example");
    std::uintmax_t n = fs::remove_all(tmp / "abcdef");
    std::cout << "Deleted " << n << " files or directories\n";
}
