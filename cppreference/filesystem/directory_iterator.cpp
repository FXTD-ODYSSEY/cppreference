// cppreference link https://en.cppreference.com/w/cpp/filesystem/directory_iterator
#include <algorithm>
#include <filesystem>
#include <fstream>
#include <iostream>

int main()
{
    const std::filesystem::path sandbox { "sandbox" };
    std::filesystem::create_directories(sandbox / "dir1" / "dir2");
    std::ofstream { sandbox / "file1.txt" };
    std::ofstream { sandbox / "file2.txt" };

    std::cout << "directory_iterator:\n";
    // directory_iterator can be iterated using a range-for loop
    for (auto const& dir_entry : std::filesystem::directory_iterator { sandbox }) {
        std::cout << dir_entry.path() << '\n';
    }

    std::cout << "\ndirectory_iterator as a range:\n";
    // directory_iterator behaves as a range in other ways, too
    std::ranges::for_each(std::filesystem::directory_iterator { sandbox },
        [](const auto& dir_entry) {
            std::cout << dir_entry << '\n';
        });

    std::cout << "\nrecursive_directory_iterator:\n";
    for (auto const& dir_entry : std::filesystem::recursive_directory_iterator { sandbox }) {
        std::cout << dir_entry << '\n';
    }

    // delete the sandbox dir and all contents within it, including subdirs
    std::filesystem::remove_all(sandbox);
}
