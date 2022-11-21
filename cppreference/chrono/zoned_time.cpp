// cppreference link https://en.cppreference.com/w/cpp/chrono/zoned_time
#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string_view>

int main()
{
    constexpr std::string_view locations[] = {
        "Africa/Casablanca",
        "America/Argentina/Buenos_Aires",
        "America/Barbados",
        "America/Indiana/Petersburg",
        "America/Tarasco_Bar",
        "Antarctica/Casey",
        "Antarctica/Vostok",
        "Asia/Magadan",
        "Asia/Manila",
        "Asia/Shanghai",
        "Asia/Tokyo",
        "Atlantic/Bermuda",
        "Australia/Darwin",
        "Europe/Isle_of_Man",
        "Europe/Laputa",
        "Indian/Christmas",
        "Indian/Cocos",
        "Pacific/Galapagos",
    };
    constexpr auto width = std::ranges::max_element(locations, {},
        [](const auto& s) { return s.length(); })
                               ->length();

    for (const auto location : locations) {
        try {
            // may throw if `location` is not in the time zone database
            const std::chrono::zoned_time zt { location, std::chrono::system_clock::now() };
            std::cout << std::setw(width) << location << " - Zoned Time: " << zt << '\n';
        } catch (std::chrono::nonexistent_local_time& ex) {
            std::cout << "Error: " << ex.what() << '\n';
        }
    }
}
