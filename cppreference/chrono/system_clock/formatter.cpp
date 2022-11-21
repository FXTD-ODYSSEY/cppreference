// cppreference link https://en.cppreference.com/w/cpp/chrono/system_clock/formatter
#include <chrono>
#include <format>
#include <iostream>

int main()
{
    std::chrono::time_point<std::chrono::utc_clock> epoch;

    std::cout << std::format("The time of the Unix epoch was {0:%F}T{0:%R%z}.", epoch);
}
