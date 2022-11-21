// cppreference link https://en.cppreference.com/w/cpp/io/c/fputws
#include <clocale>
#include <cstdio>
#include <cwchar>

int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    int rc = std::fputws(L"御休みなさい", stdout);

    if (rc == EOF)
        std::perror("fputws()"); // POSIX requires that errno is set
}
