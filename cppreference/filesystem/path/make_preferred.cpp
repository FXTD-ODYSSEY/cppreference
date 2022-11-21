// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/make_preferred
#include <filesystem>
#include <iomanip>
#include <iostream>

int main()
{
    std::filesystem::path windows_path { "a\\b\\c" };
    std::filesystem::path posix_path { "a/b/c" };
    std::cout << "Windows path: "
              << std::quoted(windows_path.string()) << " -> "
              << std::quoted(windows_path.make_preferred().string()) << '\n'
              << "POSIX path: "
              << std::quoted(posix_path.string()) << " -> "
              << std::quoted(posix_path.make_preferred().string()) << '\n';
}
