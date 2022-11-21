// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/temp_directory_path
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;
int main()
{
    std::cout << "Temp directory is " << fs::temp_directory_path() << '\n';
}
