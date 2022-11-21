// cppreference link https://en.cppreference.com/w/cpp/string/byte/strtof
#include <cerrno>
#include <clocale>
#include <cstdlib>
#include <iostream>
#include <string>

int main()
{
    const char* p = "111.11 -2.22 0X1.BC70A3D70A3D7P+6 -Inf 1.18973e+4932zzz";
    char* end;
    std::cout << "Parsing \"" << p << "\":\n";
    for (double f = std::strtod(p, &end); p != end; f = std::strtod(p, &end)) {
        std::cout << "  '" << std::string(p, end - p) << "' -> ";
        p = end;
        if (errno == ERANGE) {
            std::cout << "range error, got ";
            errno = 0;
        }
        std::cout << f << '\n';
    }

    if (std::setlocale(LC_NUMERIC, "de_DE.utf8")) {
        std::cout << "With de_DE.utf8 locale:\n";
        std::cout << "  '123.45' -> " << std::strtod("123.45", 0) << '\n';
        std::cout << "  '123,45' -> " << std::strtod("123,45", 0) << '\n';
    }
}
