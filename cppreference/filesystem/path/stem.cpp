// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/stem
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

int main()
{
    for (const fs::path p : { "/foo/bar.txt", "/foo/.bar", "foo.bar.baz.tar" })
        std::cout << "path: " << p << ", stem: " << p.stem() << '\n';

    std::cout << '\n';

    for (fs::path p = "foo.bar.baz.tar"; !p.extension().empty(); p = p.stem())
        std::cout << "path: " << p << ", extension: " << p.extension() << '\n';
}
