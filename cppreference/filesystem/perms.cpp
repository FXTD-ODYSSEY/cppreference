// cppreference link https://en.cppreference.com/w/cpp/filesystem/perms
#include <bitset>
#include <filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::filesystem;

void demo_perms(fs::perms p)
{
    std::cout << ((p & fs::perms::owner_read) != fs::perms::none ? "r" : "-")
              << ((p & fs::perms::owner_write) != fs::perms::none ? "w" : "-")
              << ((p & fs::perms::owner_exec) != fs::perms::none ? "x" : "-")
              << ((p & fs::perms::group_read) != fs::perms::none ? "r" : "-")
              << ((p & fs::perms::group_write) != fs::perms::none ? "w" : "-")
              << ((p & fs::perms::group_exec) != fs::perms::none ? "x" : "-")
              << ((p & fs::perms::others_read) != fs::perms::none ? "r" : "-")
              << ((p & fs::perms::others_write) != fs::perms::none ? "w" : "-")
              << ((p & fs::perms::others_exec) != fs::perms::none ? "x" : "-")
              << '\n';
}
int main()
{
    std::ofstream("test.txt"); // create file

    std::cout << "Created file with permissions: ";
    demo_perms(fs::status("test.txt").permissions());

    fs::permissions("test.txt",
        fs::perms::owner_all | fs::perms::group_all,
        fs::perm_options::add);

    std::cout << "After adding u+rwx and g+rwx:  ";
    demo_perms(fs::status("test.txt").permissions());

    fs::remove("test.txt");
}
