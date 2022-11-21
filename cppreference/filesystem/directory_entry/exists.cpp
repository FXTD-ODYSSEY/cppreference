// cppreference link https://en.cppreference.com/w/cpp/filesystem/directory_entry/exists
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

namespace fs = std::filesystem;

int main()
{
    // store current path to restore it at exit
    const auto old_current_path = fs::current_path();

    // create "sanbox" directory in temp dir
    const auto dir_sandbox = fs::temp_directory_path() / "sandbox";

    if (!fs::create_directory(dir_sandbox)) {
        std::cout << "ERROR #1" << '\n';
        return -1;
    }

    fs::current_path(dir_sandbox); // switch to newly created dir

    fs::directory_entry entry_sandbox { dir_sandbox };
    if (!entry_sandbox.exists()) {
        std::cout << "ERROR #2" << '\n';
        return -1;
    }

    std::cout << "Current dir: " << entry_sandbox.path().filename() << '\n';

    fs::path path_tmp_file = dir_sandbox / "tmp_file";

    std::ofstream file(path_tmp_file.string()); // create regular file
    file << "cppreference.com"; // write 16 bytes
    file.flush();

    fs::directory_entry entry_tmp_file { path_tmp_file };

    if (entry_tmp_file.exists()) {
        std::cout << "File " << entry_tmp_file.path().filename()
                  << " has size: " << entry_tmp_file.file_size() << '\n';
    } else {
        std::cout << "ERROR #3" << '\n';
    }

    // cleanup
    fs::current_path(old_current_path);
    fs::remove_all(dir_sandbox);
}
