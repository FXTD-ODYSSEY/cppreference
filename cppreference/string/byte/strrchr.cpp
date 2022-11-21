// cppreference link https://en.cppreference.com/w/cpp/string/byte/strrchr
#include <cstring>
#include <iostream>

int main()
{
    char input[] = "/home/user/hello.c";
    char* output = std::strrchr(input, '/');
    if (output)
        std::cout << output + 1 << '\n';
}
