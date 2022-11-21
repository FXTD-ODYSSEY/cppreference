// cppreference link https://en.cppreference.com/w/cpp/io/c/fgets
#include <cstdio>
#include <cstdlib>
#include <iostream>

int main()
{
    std::FILE* tmpf = std::tmpfile();
    std::fputs("Alan Turing\n", tmpf);
    std::fputs("John von Neumann\n", tmpf);
    std::fputs("Alonzo Church\n", tmpf);

    std::rewind(tmpf);
    char buf[8];
    while (std::fgets(buf, sizeof buf, tmpf) != nullptr) {
        std::cout << '"' << buf << '"' << '\n';
    }
}
