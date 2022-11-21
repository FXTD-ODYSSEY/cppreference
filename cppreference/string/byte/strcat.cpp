// cppreference link https://en.cppreference.com/w/cpp/string/byte/strcat
#include <cstdio>
#include <cstring>

int main()
{
    char str[50] = "Hello ";
    char str2[50] = "World!";
    std::strcat(str, str2);
    std::strcat(str, " Goodbye World!");
    std::puts(str);
}
