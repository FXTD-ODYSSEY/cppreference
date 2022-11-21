// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/root_name
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

int main()
{
    std::cout << "Current root name is: " << fs::current_path().root_name() << '\n';
}
