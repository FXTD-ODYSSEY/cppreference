// cppreference link https://en.cppreference.com/w/cpp/filesystem/recursive_directory_iterator/disable_recursion_pending
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
namespace fs = std::filesystem;

int main()
{
    fs::current_path(fs::temp_directory_path());
    fs::create_directories("sandbox/a/b/c");
    fs::create_directories("sandbox/a/b/d/e");
    std::ofstream("sandbox/a/b/file1.txt");
    fs::create_symlink("a", "sandbox/syma");
    std::system("tree sandbox");
    for (auto i = fs::recursive_directory_iterator("sandbox");
         i != fs::recursive_directory_iterator();
         ++i) {
        std::cout << std::string(i.depth() * 2, ' ') << *i;
        if (fs::is_symlink(i->symlink_status()))
            std::cout << " -> " << fs::read_symlink(*i);
        std::cout << '\n';

        // do not descend into "b"
        if (i->path().filename() == "b")
            i.disable_recursion_pending();
    }
    fs::remove_all("sandbox");
}
