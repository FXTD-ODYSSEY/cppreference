// cppreference link https://en.cppreference.com/w/cpp/string/char_traits/length
#include <iomanip>
#include <iostream>
#include <string>

void print(const char* str)
{
    std::cout << std::quoted(str) << " has length = "
              << std::char_traits<char>::length(str) << '\n';
}

int main()
{
    print("foo");

    std::string s { "booo" };
    print(s.c_str());
}
