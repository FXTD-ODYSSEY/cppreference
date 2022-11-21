// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/compare
#include <filesystem>
#include <iostream>
#include <string_view>
namespace fs = std::filesystem;

void demo(fs::path p1, fs::path p2, std::string_view msg)
{
    using std::cout;
    cout << p1;
    const int rc = p1.compare(p2);
    if (rc < 0)
        cout << " < ";
    else if (rc > 0)
        cout << " > ";
    else
        cout << " == ";
    cout << p2 << " \t: " << msg << '\n';
}

int main()
{
    demo("/a/b/", "/a/b/", "simple");
    demo("/a/b/", "/a/b/c", "simple");
    demo("/a/b/../b", "/a/b", "no canonical conversion");
    demo("/a/b", "/a/b/.", "no canonical conversion");
    demo("/a/b/", "a/c", "absolute paths order after relative ones");
}
