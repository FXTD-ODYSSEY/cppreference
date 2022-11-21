// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/hash
#include <cassert>
#include <cstddef>
#include <filesystem>
#include <iomanip>
#include <iostream>
#include <unordered_set>
namespace fs = std::filesystem;

void show_hash(fs::path const& p)
{
    std::cout << std::hex << std::uppercase << std::setw(16)
              << std::hash<fs::path> {}(p) << ": " << p << '\n';
}

int main()
{
    auto tmp1 = fs::path { "/tmp" };
    auto tmp2 = fs::path { "/tmp/../tmp" };
    assert(!(tmp1 == tmp2));
    assert(fs::equivalent(tmp1, tmp2));
    show_hash(tmp1);
    show_hash(tmp2);

    for (auto s : { "/a///b", "/a//b", "/a/c", "...", "..", ".", "" })
        show_hash(s);

    std::unordered_set<fs::path, std::hash<fs::path>> dirs {
        "/bin", "/bin", "/lib", "/lib", "/opt", "/opt", "/tmp", "/tmp/../tmp"
    };
    for (fs::path const& p : dirs) {
        std::cout << p << ' ';
    }
}
