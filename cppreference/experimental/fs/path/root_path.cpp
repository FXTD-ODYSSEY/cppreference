// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/path/root_path
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;

int main()
{
    std::cout << "Current root path is: " << fs::current_path().root_path() << '\n';
}
