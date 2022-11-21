// cppreference link https://en.cppreference.com/w/cpp/chrono/operator%22%22us
#include <chrono>
#include <iostream>

int main()
{
    using namespace std::chrono_literals;
    auto d1 = 250us;
    std::chrono::microseconds d2 = 1ms;
    std::cout << "250us = " << d1.count() << " microseconds\n"
              << "1ms = " << d2.count() << " microseconds\n";
}
