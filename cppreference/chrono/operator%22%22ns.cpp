// cppreference link https://en.cppreference.com/w/cpp/chrono/operator%22%22ns
#include <chrono>
#include <iostream>

int main()
{
    using namespace std::chrono_literals;
    auto d1 = 250ns;
    std::chrono::nanoseconds d2 = 1us;
    std::cout << "250ns = " << d1.count() << " nanoseconds\n"
              << "1us = " << d2.count() << " nanoseconds\n";
}
