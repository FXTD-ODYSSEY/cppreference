// cppreference link https://en.cppreference.com/w/cpp/filesystem/read_symlink
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main()
{
    for (fs::path p : { "/usr/bin/gcc", "/bin/cat", "/bin/mouse" }) {
        std::cout << p;
        fs::exists(p)
            ? fs::is_symlink(p)
                ? std::cout << " -> " << fs::read_symlink(p) << '\n'
                : std::cout << " exists but it is not a symlink\n"
            : std::cout << " does not exist\n";
    }
}
