// cppreference link https://en.cppreference.com/w/cpp/chrono/year_month_day
#include <chrono>
#include <iostream>

int main()
{
    const std::chrono::time_point now { std::chrono::system_clock::now() };

    const std::chrono::year_month_day ymd { std::chrono::floor<std::chrono::days>(now) };

    std::cout << "Current Year: " << static_cast<int>(ymd.year())
              << ", Month: " << static_cast<unsigned>(ymd.month())
              << ", Day: " << static_cast<unsigned>(ymd.day()) << '\n';
}
