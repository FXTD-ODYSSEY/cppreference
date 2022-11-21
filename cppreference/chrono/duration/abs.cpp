// cppreference link https://en.cppreference.com/w/cpp/chrono/duration/abs
#include <chrono>
#include <iostream>

int main()
{
    using namespace std::chrono;

    static_assert(abs(-42s) == std::chrono::abs(42s));

    std::cout << "abs(+3min) = " << abs(3min).count() << '\n'
              << "abs(-3min) = " << abs(-3min).count() << '\n';
}
