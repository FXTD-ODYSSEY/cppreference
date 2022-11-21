// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/remove_filename
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

int main()
{
    fs::path p;
    std::cout << std::boolalpha
              << (p = "foo/bar").remove_filename() << '\t' << p.has_filename() << '\n'
              << (p = "foo/").remove_filename() << '\t' << p.has_filename() << '\n'
              << (p = "/foo").remove_filename() << '\t' << p.has_filename() << '\n'
              << (p = "/").remove_filename() << '\t' << p.has_filename() << '\n'
              << (p = "").remove_filename() << '\t' << p.has_filename() << '\n';
}
