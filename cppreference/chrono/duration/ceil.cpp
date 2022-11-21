// cppreference link https://en.cppreference.com/w/cpp/chrono/duration/ceil
#include <chrono>
#include <iostream>

int main()
{
    using namespace std::chrono_literals;
    using Min = std::chrono::minutes;

    std::cout
        << std::showpos
        << "ceil(+2.4min) = " << std::chrono::ceil<Min>(+2.4min).count() << "min\n"
        << "ceil(-2.4min) = " << std::chrono::ceil<Min>(-2.4min).count() << "min\n"
        << "ceil(+0.0min) = " << std::chrono::ceil<Min>(+0.0min).count() << "min\n";
}
