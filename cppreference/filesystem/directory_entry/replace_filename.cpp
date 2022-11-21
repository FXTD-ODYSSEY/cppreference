// cppreference link https://en.cppreference.com/w/cpp/filesystem/directory_entry/replace_filename
#include <filesystem>
#include <iostream>

int main()
{
    namespace fs = std::filesystem;
    {
        fs::directory_entry entry { "omega" };
        std::cout << entry << '\n';
        entry.replace_filename("alpha");
        std::cout << entry << '\n';
    }
    {
        fs::directory_entry entry { "/omega/" };
        std::cout << entry << '\n';
        entry.replace_filename("alpha");
        std::cout << entry << '\n';
    }
}
