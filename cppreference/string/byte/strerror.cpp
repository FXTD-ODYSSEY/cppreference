// cppreference link https://en.cppreference.com/w/cpp/string/byte/strerror
#include <cerrno>
#include <clocale>
#include <cmath>
#include <cstring>
#include <iostream>

int main()
{
    double not_a_number = std::log(-1.0);
    std::cout << not_a_number << '\n';
    if (errno == EDOM) {
        std::cout << "log(-1) failed: " << std::strerror(errno) << '\n';
        std::setlocale(LC_MESSAGES, "de_DE.utf8");
        std::cout << "Or, in German, " << std::strerror(errno) << '\n';
    }
}
