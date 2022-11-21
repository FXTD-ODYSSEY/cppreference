// cppreference link https://en.cppreference.com/w/cpp/chrono/time_point/ceil
#include <chrono>
#include <iostream>
#include <string>

template <typename TimePoint>
std::string to_string(const TimePoint& time_point)
{
    return std::to_string(time_point.time_since_epoch().count());
}

int main()
{
    using namespace std::literals::chrono_literals;
    using Sec = std::chrono::seconds;

    std::cout << "Time point\t"
                 "Cast\t"
                 "Floor\t"
                 "Round\t"
                 "Ceil\n";
    std::cout << "(ms)\t\t"
                 "(s)\t"
                 "(s)\t"
                 "(s)\t"
                 "(s)\n";
    for (const auto value_ms : { 5432ms, 5678ms }) {
        std::chrono::time_point<std::chrono::system_clock, std::chrono::milliseconds>
            time_point_ms(value_ms);

        std::cout
            << to_string(time_point_ms) << "\t\t"
            << to_string(std::chrono::time_point_cast<Sec>(time_point_ms)) << "\t"
            << to_string(std::chrono::floor<Sec>(time_point_ms)) << "\t"
            << to_string(std::chrono::round<Sec>(time_point_ms)) << "\t"
            << to_string(std::chrono::ceil<Sec>(time_point_ms)) << "\n";
    }
}
