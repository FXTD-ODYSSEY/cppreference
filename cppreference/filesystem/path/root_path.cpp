// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/root_path
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

int main()
{
    std::cout << "Current root path is: " << fs::current_path().root_path() << '\n';
}
