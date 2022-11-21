// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/remove
#include <cstdint>
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;
int main()
{
    fs::path dir = fs::temp_directory_path();
    fs::create_directories(dir / "abcdef/example");
    std::uintmax_t n = fs::remove_all(dir / "abcdef");
    std::cout << "Deleted " << n << " files or directories\n";
}
