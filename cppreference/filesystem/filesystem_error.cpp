// cppreference link https://en.cppreference.com/w/cpp/filesystem/filesystem_error
#include <filesystem>
#include <iostream>
#include <system_error>

int main()
{
    const std::filesystem::path from { "/nonexistent1/a" }, to { "/nonexistent2/b" };
    try {
        std::filesystem::copy_file(from, to); // throws: files do not exist
    } catch (std::filesystem::filesystem_error const& ex) {
        std::cout
            << "what():  " << ex.what() << '\n'
            << "path1(): " << ex.path1() << '\n'
            << "path2(): " << ex.path2() << '\n'
            << "code().value():    " << ex.code().value() << '\n'
            << "code().message():  " << ex.code().message() << '\n'
            << "code().category(): " << ex.code().category().name() << '\n';
    }

    // All functions have non-throwing equivalents
    std::error_code ec;
    std::filesystem::copy_file(from, to, ec); // does not throw
    std::cout << "\nnon-throwing form sets error_code: " << ec.message() << '\n';
}
