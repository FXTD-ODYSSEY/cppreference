// cppreference link https://en.cppreference.com/w/cpp/chrono/last_spec
#include <chrono>
#include <iostream>

int main()
{
    using namespace std::chrono;

    std::cout << std::boolalpha;

    constexpr auto mdl { June / last };
    std::cout << (mdl == month_day_last(month(6))) << ' ';

    constexpr auto ymwdl { year(2023) / December / Tuesday[last] };
    std::cout << (ymwdl == year_month_weekday_last(year(2023), month(12), weekday_last(Tuesday))) << '\n';
}
