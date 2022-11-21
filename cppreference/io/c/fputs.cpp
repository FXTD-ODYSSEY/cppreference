// cppreference link https://en.cppreference.com/w/cpp/io/c/fputs
#include <cstdio>

int main(void)
{
    int rc = std::fputs("Hello World", stdout);

    if (rc == EOF)
        std::perror("fputs()"); // POSIX requires that errno is set
}
