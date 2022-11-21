// cppreference link https://en.cppreference.com/w/cpp/string/byte/strncat
#include <cstdio>
#include <cstring>

int main()
{
    char str[50] = "Hello ";
    char str2[50] = "World!";
    std::strcat(str, str2);
    std::strncat(str, " Goodbye World!", 3);
    std::puts(str);
}
