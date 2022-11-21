// cppreference link https://en.cppreference.com/w/cpp/filesystem/relative
#include <filesystem>
#include <iostream>

void show(std::filesystem::path x, std::filesystem::path y)
{
    std::cout << "x:\t\t " << x << "\ny:\t\t " << y << '\n'
              << "relative(x, y):  "
              << std::filesystem::relative(x, y) << '\n'
              << "proximate(x, y): "
              << std::filesystem::proximate(x, y) << "\n\n";
}

int main()
{
    show("/a/b/c", "/a/b");
    show("/a/c", "/a/b");
    show("c", "/a/b");
    show("/a/b", "c");
}
