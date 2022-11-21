// cppreference link https://en.cppreference.com/w/cpp/io/print
#include <cstdio>
#include <filesystem>
#include <print>

int main()
{
    std::print("{0} {2}{1}!\n", "Hello", 23, "C++"); // overload (1)

    const auto tmp { std::filesystem::temp_directory_path() / "test.txt" };

    if (std::FILE * stream { std::fopen(tmp.c_str(), "w") }) {
        std::print(stream, "File: {}", tmp.string()); // overload (2)
        std::fclose(stream);
    }
}
