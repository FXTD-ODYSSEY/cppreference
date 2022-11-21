// cppreference link https://en.cppreference.com/w/cpp/filesystem/filesystem_error/what
#include <cstdio>
#include <filesystem>
#include <iostream>
#include <string_view>
namespace fs = std::filesystem;

void explain(std::string_view note, fs::filesystem_error const& ex)
{
    std::cout << note << " exception:\n"
              << "what(): " << ex.what() << '\n'
              << "path1(): " << ex.path1() << ", path2(): "
              << ex.path2() << "\n\n";
}

int main()
{
    try {
        std::filesystem::rename("/dev", "/null");
    } catch (fs::filesystem_error const& ex) {
        explain("fs::rename()", ex);
    }

    for (auto const path : { "/bool", "/bin/cat", "/bin/mouse" })
        try {
            std::filesystem::create_directory(path);
        } catch (fs::filesystem_error const& ex) {
            explain("fs::create_directory()", ex);
        }
}
