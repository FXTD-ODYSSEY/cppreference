// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/equivalent
#include <cstdint>
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;
int main()
{
    // hard link equivalency
    fs::path p1 = ".";
    fs::path p2 = fs::current_path();
    if (fs::equivalent(p1, p2))
        std::cout << p1 << " is equivalent to " << p2 << '\n';

    // symlink equivalency
    fs::path p3 = "/lib/libc.so.6";
    fs::path p4 = p3.parent_path() / fs::read_symlink(p3);
    if (fs::equivalent(p3, p4))
        std::cout << p3 << " is equivalent to " << p4 << '\n';
}
