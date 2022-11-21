// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/replace_extension
#include <filesystem>
#include <iomanip>
#include <iostream>
#include <utility>
namespace fs = std::filesystem;

int main()
{
    std::cout << "Path:             Ext:       Result:\n"
              << std::left;
    for (const auto& [path, extension] : {
             std::make_pair("/foo/bar.jpg", ".png"),
             std::make_pair("/foo/bar.jpg", "png"),
             std::make_pair("/foo/bar.jpg", "."),
             std::make_pair("/foo/bar.jpg", ""),
             std::make_pair("/foo/bar.", "png"),
             std::make_pair("/foo/bar", ".png"),
             std::make_pair("/foo/bar", "png"),
             std::make_pair("/foo/bar", "."),
             std::make_pair("/foo/bar", ""),
             std::make_pair("/foo/.", ".png"),
             std::make_pair("/foo/.", "png"),
             std::make_pair("/foo/.", "."),
             std::make_pair("/foo/.", ""),
             std::make_pair("/foo/", ".png"),
             std::make_pair("/foo/", "png"),
         }) {
        fs::path p = path, e = extension;
        std::cout << std::setw(18) << p << std::setw(11) << e;
        p.replace_extension(e);
        std::cout << p << '\n';
    }
}
