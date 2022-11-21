// cppreference link https://en.cppreference.com/w/cpp/io/c/perror
#include <cerrno>
#include <cmath>
#include <cstdio>

int main()
{
    double not_a_number = std::log(-1.0);
    if (errno == EDOM) {
        std::perror("log(-1) failed");
    }
    std::printf("%f\n", not_a_number);
}
