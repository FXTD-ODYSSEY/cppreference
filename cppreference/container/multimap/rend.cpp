// cppreference link https://en.cppreference.com/w/cpp/container/multimap/rend
#include <chrono>
#include <iomanip>
#include <iostream>
#include <map>
#include <string_view>
using namespace std::chrono;

// until C++20 chrono operator<< ready
std::ostream& operator<<(std::ostream& os, const year_month_day& ymd)
{
    return os << std::setfill('0') << static_cast<int>(ymd.year()) << '/'
              << std::setw(2) << static_cast<unsigned>(ymd.month()) << '/'
              << std::setw(2) << static_cast<unsigned>(ymd.day());
}

int main()
{
    const std::multimap<year_month_day, int> messages {
        { February / 17 / 2023, 10 },
        { February / 17 / 2023, 20 },
        { February / 16 / 2022, 30 },
        { October / 22 / 2022, 40 },
        { June / 14 / 2022, 50 },
        { November / 23 / 2021, 60 },
        { December / 10 / 2022, 55 },
        { December / 12 / 2021, 45 },
        { April / 1 / 2020, 42 },
        { April / 1 / 2020, 24 },
    };
    std::cout << "Messages received, reverse date order:\n";
    for (auto it = messages.crbegin(); it != messages.crend(); ++it) {
        std::cout << it->first << ": " << it->second << '\n';
    }
}
