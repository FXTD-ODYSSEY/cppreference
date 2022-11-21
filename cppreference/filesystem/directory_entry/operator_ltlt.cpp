// cppreference link https://en.cppreference.com/w/cpp/filesystem/directory_entry/operator_ltlt
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

int main()
{
    const auto entries = {
        fs::directory_entry { fs::current_path() },
        fs::directory_entry { fs::temp_directory_path() }
    };

    for (const fs::directory_entry& de : entries) {
        std::cout << de << '\n';
    }
}
