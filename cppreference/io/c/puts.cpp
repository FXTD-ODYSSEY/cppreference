// cppreference link https://en.cppreference.com/w/cpp/io/c/puts
#include <cstdio>

int main()
{
    int rc = std::puts("Hello World");

    if (rc == EOF)
        std::perror("puts()"); // POSIX requires that errno is set
}
