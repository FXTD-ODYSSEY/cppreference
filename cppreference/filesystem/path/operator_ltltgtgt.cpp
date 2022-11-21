// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/operator_ltltgtgt
#include <filesystem>
#include <iostream>
int main()
{
    std::cout << std::filesystem::current_path() << '\n';
    std::cout << std::filesystem::temp_directory_path() << '\n';
}
