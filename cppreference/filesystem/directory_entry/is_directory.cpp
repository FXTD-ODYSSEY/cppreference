// cppreference link https://en.cppreference.com/w/cpp/filesystem/directory_entry/is_directory
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main()
{
    fs::directory_entry d1(".");
    fs::directory_entry d2("file.txt");
    fs::directory_entry d3("new_dir");

    std::cout << std::boolalpha
              << ". d1 " << d1.is_directory() << '\n'
              << "file.txt d2 " << d2.is_directory() << '\n'
              // false because it has not been created
              << "new_dir d3 " << d3.is_directory() << '\n';

    fs::create_directory("new_dir");

    std::cout << "new_dir d3 before refresh " << d3.is_directory() << '\n';
    d3.refresh();
    std::cout << "new_dir d3 after refresh " << d3.is_directory() << '\n';
}
