// cppreference link https://en.cppreference.com/w/cpp/filesystem/directory_entry/assign
#include <filesystem>
#include <fstream>
#include <iostream>

void print_entry_info(const std::filesystem::directory_entry& entry)
{
    std::cout << "the entry " << entry;
    if (not entry.exists()) {
        std::cout << " does not exists on the file system\n";
        return;
    }
    std::cout << " is ";
    if (entry.is_directory())
        std::cout << "a directory\n";
    if (entry.is_regular_file())
        std::cout << "a regular file\n";
    /*...*/
}

int main()
{
    std::filesystem::current_path(std::filesystem::temp_directory_path());

    std::filesystem::directory_entry entry { std::filesystem::current_path() };
    print_entry_info(entry);

    std::filesystem::path name { "cppreference.html" };
    std::ofstream { name } << "C++";

    std::cout << "entry.assign();\n";
    entry.assign(entry / name);
    print_entry_info(entry);

    std::cout << "remove(entry);\n";
    std::filesystem::remove(entry);
    print_entry_info(entry); // the entry still contains old "state"

    std::cout << "entry.assign();\n";
    entry.assign(entry); // or just call entry.refresh()
    print_entry_info(entry);
}
