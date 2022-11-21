// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/path/compare
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;
void demo(int rc, fs::path p1, fs::path p2)
{
    if (rc < 0)
        std::cout << p1 << " < " << p2 << '\n';
    else if (rc > 0)
        std::cout << p1 << " > " << p2 << '\n';
    else if (rc == 0)
        std::cout << p1 << "==" << p2 << '\n';
}
int main()
{
    fs::path p1 = "/a/b/"; // as if "a/b/." for lexicographical iteration
    fs::path p2 = "/a/b/#";
    demo(p1.compare(p2), p1, p2);
    demo(p1.compare("a/b/_"), p1, "a/b/_");
}
