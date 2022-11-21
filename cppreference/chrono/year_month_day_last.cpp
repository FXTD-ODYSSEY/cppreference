// cppreference link https://en.cppreference.com/w/cpp/chrono/year_month_day_last
#include <chrono>
#include <iostream>

// until online compiler supports streaming the year_month_day_last:
std::ostream& operator<<(std::ostream& os, std::chrono::year_month_day_last ymdl)
{
    return os << static_cast<int>(ymdl.year()) << '/'
              << static_cast<unsigned>(ymdl.month()) << '/'
              << static_cast<unsigned>(ymdl.day());
}

int main()
{
    const auto ymd = std::chrono::year_month_day {
        std::chrono::floor<std::chrono::days>(
            std::chrono::system_clock::now())
    };

    const std::chrono::year_month_day_last ymdl {
        ymd.year(), ymd.month() / std::chrono::last
    };
    std::cout << "The date of the last day of this month is: " << ymdl << '\n';

    // The `last` object can be placed wherever it is legal to place a `day`:
    using namespace std::chrono;
    constexpr std::chrono::year_month_day_last
        ymdl1
        = 2023y / February / last,
        ymdl2 = last / February / 2023y,
        ymdl3 = February / last / 2023y;
    static_assert(ymdl1 == ymdl2 and ymdl2 == ymdl3);
}
