// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/copy
#include <iostream>
#include <string>

int main()
{
    std::string foo("quuuux");
    char bar[7] {};
    foo.copy(bar, sizeof bar);
    std::cout << bar << '\n';
}
