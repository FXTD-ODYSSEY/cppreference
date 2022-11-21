// cppreference link https://en.cppreference.com/w/cpp/filesystem/directory_entry/is_regular_file
#include <filesystem>
#include <iostream>
#include <string>

namespace fs = std::filesystem;

int main(int argc, const char* argv[])
{
    // Print out all regular files in a directory 'dir'.
    try {
        const auto dir = argc == 2
            ? fs::path { argv[1] }
            : fs::current_path();

        std::cout << "Current dir: " << dir << '\n'
                  << std::string(40, '-') << '\n';

        for (fs::directory_entry const& entry : fs::directory_iterator(dir)) {
            if (entry.is_regular_file()) {
                std::cout << entry.path().filename() << '\n';
            }
        }
    } catch (fs::filesystem_error const& e) {
        std::cout << e.what() << '\n';
    }
}
