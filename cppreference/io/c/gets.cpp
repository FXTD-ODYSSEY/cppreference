// cppreference link https://en.cppreference.com/w/cpp/io/c/gets
#include <array>
#include <cstdio>
#include <cstring>

int main()
{
    std::puts("Never use std::gets(). Use std::fgets() instead!");

    std::array<char, 16> buf;

    std::printf("Enter a string:\n>");

    if (std::fgets(buf.data(), buf.size(), stdin)) {
        const auto len = std::strlen(buf.data());
        std::printf(
            "The input string:\n[%s] is%s and has the length%li characters.\n",
            buf.data(), len + 1 < buf.size() ? "not truncated" : "truncated", len);
    } else if (std::feof(stdin)) {
        std::puts("Error: the end of stdin stream has been reached.");
    } else if (std::ferror(stdin)) {
        std::puts("I/O error when reading from stdin.");
    } else {
        std::puts("Unknown stdin error.");
    }
}
