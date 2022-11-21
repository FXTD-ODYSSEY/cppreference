// cppreference link https://en.cppreference.com/w/cpp/filesystem/canonical
#include <filesystem>
#include <iostream>

int main()
{
    /* set up sandbox directories:
     a
     └── b
         ├── c1
         │   └── d <== current path
         └── c2
             └── e
    */
    auto old = std::filesystem::current_path();
    auto tmp = std::filesystem::temp_directory_path();
    std::filesystem::current_path(tmp);
    auto d1 = tmp / "a/b/c1/d";
    auto d2 = tmp / "a/b/c2/e";
    std::filesystem::create_directories(d1);
    std::filesystem::create_directories(d2);
    std::filesystem::current_path(d1);

    auto p1 = std::filesystem::path("../../c2/./e");
    auto p2 = std::filesystem::path("../no-such-file");
    std::cout << "Current path is "
              << std::filesystem::current_path() << '\n'
              << "Canonical path for " << p1 << " is "
              << std::filesystem::canonical(p1) << '\n'
              << "Weakly canonical path for " << p2 << " is "
              << std::filesystem::weakly_canonical(p2) << '\n';
    try {
        std::filesystem::canonical(p2);
        // NOT REACHED
    } catch (const std::exception& ex) {
        std::cout << "Canonical path for " << p2 << " threw exception:\n"
                  << ex.what() << '\n';
    }

    // cleanup
    std::filesystem::current_path(old);
    const auto count = std::filesystem::remove_all(tmp / "a");
    std::cout << "Deleted " << count << " files or directories.\n";
}
