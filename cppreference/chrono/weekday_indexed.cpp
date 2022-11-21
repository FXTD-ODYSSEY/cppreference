// cppreference link https://en.cppreference.com/w/cpp/chrono/weekday_indexed
#include <chrono>
#include <iostream>

int main()
{
    using namespace std::chrono;

    constexpr weekday_indexed wi = Friday[2];

    // Indexed weekday can be used at any place where chrono::day can be used:
    constexpr year_month_weekday ymwd = 2021y / August / wi;
    static_assert(ymwd == August / wi / 2021y and ymwd == wi / August / 2021y);
    // std::cout << ymwd << '\n';

    constexpr year_month_day ymd { ymwd }; // a conversion
    static_assert(ymd == 2021y / 8 / 13);
    // std::cout << ymd << '\n';
}
