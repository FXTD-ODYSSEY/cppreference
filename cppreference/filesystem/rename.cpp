// cppreference link https://en.cppreference.com/w/cpp/filesystem/rename
#include <filesystem>
#include <fstream>
namespace fs = std::filesystem;

int main()
{
    std::filesystem::path p = std::filesystem::current_path() / "sandbox";
    std::filesystem::create_directories(p / "from");
    std::ofstream { p / "from/file1.txt" }.put('a');
    std::filesystem::create_directory(p / "to");

    //  fs::rename(p / "from/file1.txt", p / "to/"); // error: "to" is a directory
    fs::rename(p / "from/file1.txt", p / "to/file2.txt"); // OK
    //  fs::rename(p / "from", p / "to"); // error: "to" is not empty
    fs::rename(p / "from", p / "to/subdir"); // OK

    std::filesystem::remove_all(p);
}
