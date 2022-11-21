// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/path/root_name
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;

int main()
{
    std::cout << "Current root name is: " << fs::current_path().root_name() << '\n';
}
