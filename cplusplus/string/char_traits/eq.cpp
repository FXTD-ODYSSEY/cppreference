// cplusplus link https://cplusplus.com/reference/string\char_traits\eq
// char_traits::eq
#include <cctype> // std::tolower
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <string> // std::basic_string, std::char_traits

// traits with case-insensitive eq:
struct custom_traits : std::char_traits<char> {
    static bool eq(char c, char d) { return std::tolower(c) == std::tolower(d); }
    // some (non-conforming) implementations of basic_string::find call this instead of eq:
    static const char* find(const char* s, std::size_t n, char c)
    {
        while (n-- && (!eq(*s, c)))
            ++s;
        return s;
    }
};

int main()
{
    std::basic_string<char, custom_traits> str("Test");
    std::cout << "T found at position " << str.find('t') << '\n';
    return 0;
}
