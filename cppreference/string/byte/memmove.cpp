// cppreference link https://en.cppreference.com/w/cpp/string/byte/memmove
#include <cstring>
#include <iostream>

int main()
{
    char str[] = "1234567890";
    std::cout << str << '\n';
    std::memmove(str + 4, str + 3, 3); // copies from [4, 5, 6] to [5, 6, 7]
    std::cout << str << '\n';
}
