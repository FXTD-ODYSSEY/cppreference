// cppreference link https://en.cppreference.com/w/cpp/string/byte/strcspn
#include <cstddef>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    std::string s = "abcde312$#@";
    const char* invalid = "*$#";

    const std::size_t valid_len = std::strcspn(s.c_str(), invalid);
    if (valid_len != s.size()) {
        std::cout << std::quoted(s)
                  << " contains invalid chars starting at position "
                  << valid_len << '\n'
                  << std::string(valid_len + 1, '-') << "^\n";
    }
}
