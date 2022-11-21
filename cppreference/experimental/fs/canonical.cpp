// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/canonical
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;
int main()
{
    fs::path p = fs::path("..") / ".." / "AppData";
    std::cout << "Current path is " << fs::current_path() << '\n'
              << "Canonical path for " << p << " is " << fs::canonical(p) << '\n';
}
