// cplusplus link https://cplusplus.com/reference/string\char_traits\compare
// char_traits::compare
#include <cctype> // std::tolower
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <string> // std::basic_string, std::char_traits

// case-insensitive traits:
struct custom_traits : std::char_traits<char> {
    static bool eq(char c, char d) { return std::tolower(c) == std::tolower(d); }
    static bool lt(char c, char d) { return std::tolower(c) < std::tolower(d); }
    static int compare(const char* p, const char* q, std::size_t n)
    {
        while (n--) {
            if (!eq(*p, *q))
                return lt(*p, *q) ? -1 : 1;
            ++p;
            ++q;
        }
        return 0;
    }
};

int main()
{
    std::basic_string<char, custom_traits> foo, bar;
    foo = "Test";
    bar = "test";
    if (foo == bar)
        std::cout << "foo and bar are equal\n";
    return 0;
}
