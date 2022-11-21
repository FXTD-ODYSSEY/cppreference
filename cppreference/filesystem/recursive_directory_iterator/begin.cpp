// cppreference link https://en.cppreference.com/w/cpp/filesystem/recursive_directory_iterator/begin
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::filesystem;

int main()
{
    fs::current_path(fs::temp_directory_path());
    fs::create_directories("sandbox/a/b");
    std::ofstream("sandbox/file1.txt");
    fs::create_symlink("a", "sandbox/syma");

    std::cout << "Print dir structure using OS specific command 'tree':\n";
    std::system("tree --noreport sandbox");

    std::cout << "\nPrint dir structure using directory iterator:\n";
    for (auto& p : fs::recursive_directory_iterator("sandbox"))
        std::cout << p << '\n';

    fs::remove_all("sandbox");
}
