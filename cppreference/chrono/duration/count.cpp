// cppreference link https://en.cppreference.com/w/cpp/chrono/duration/count
#include <chrono>
#include <iostream>
int main()
{
    std::chrono::milliseconds ms { 3 }; // 3 milliseconds
    // 6000 microseconds constructed from 3 milliseconds
    std::chrono::microseconds us = 2 * ms;
    // 30Hz clock using fractional ticks
    std::chrono::duration<double, std::ratio<1, 30>> hz30(3.5);

    std::cout << "3 ms duration has " << ms.count() << " ticks\n"
              << "6000 us duration has " << us.count() << " ticks\n"
              << "3.5 30Hz duration has " << hz30.count() << " ticks\n";
}
