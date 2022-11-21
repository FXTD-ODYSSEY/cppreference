// cppreference link https://en.cppreference.com/w/cpp/io/c/clearerr
#include <cassert>
#include <cstdio>

int main()
{
    std::FILE* tmpf = std::tmpfile();
    std::fputs("cppreference.com\n", tmpf);
    std::rewind(tmpf);

    for (int ch; (ch = std::fgetc(tmpf)) != EOF; std::putchar(ch)) { }

    assert(std::feof(tmpf)); // the loop is expected to terminate by EOF
    std::puts("End of file reached");

    std::clearerr(tmpf); // clear EOF

    std::puts(std::feof(tmpf) ? "EOF indicator set"
                              : "EOF indicator cleared");
}
