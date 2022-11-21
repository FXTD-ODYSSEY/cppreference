// cppreference link https://en.cppreference.com/w/cpp/filesystem/filesystem_error/path
#include <cstdio>
#include <filesystem>
#include <iostream>

int main()
{
    const std::filesystem::path old_p { std::tmpnam(nullptr) },
        new_p { std::tmpnam(nullptr) };
    try {
        std::filesystem::rename(old_p, new_p); // throws since old_p does not exist
    } catch (std::filesystem::filesystem_error const& ex) {
        std::cout
            << "what():  " << ex.what() << '\n'
            << "path1(): " << ex.path1() << '\n'
            << "path2(): " << ex.path2() << '\n';
    }
}
