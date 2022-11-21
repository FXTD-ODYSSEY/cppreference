// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/rename
#include <experimental/filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::experimental::filesystem;
int main()
{
    fs::path p = fs::current_path() / "sandbox";
    fs::create_directories(p / "from");
    std::ofstream(p / "from/file1.txt").put('a');
    fs::create_directory(p / "to");

    //    fs::rename(p/"from/file1.txt", p/"to/"); // error: to is a directory
    fs::rename(p / "from/file1.txt", p / "to/file2.txt"); // OK
    //    fs::rename(p/"from", p/"to"); // error: to is not empty
    fs::rename(p / "from", p / "to/subdir"); // OK

    fs::remove_all(p);
}
