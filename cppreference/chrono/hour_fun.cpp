// cppreference link https://en.cppreference.com/w/cpp/chrono/hour_fun
#include <chrono>
#include <iomanip>
#include <iostream>
#include <utility>

int main()
{
    using namespace std::chrono;

    static_assert(
        is_am(10h) && is_am(11h) && !is_am(12h) && !is_am(23h) && !is_pm(10h) && !is_pm(11h) && is_pm(12h) && is_pm(23h));

    std::cout << "make12():\n";

    for (const hours hh : { 0h, 1h, 11h, 12h, 13h, 23h }) {
        const hours am { make12(hh) };
        std::cout << std::setw(2) << hh.count() << "h == "
                  << std::setw(2) << am.count() << (is_am(hh) ? "h a.m.\n" : "h p.m.\n");
    }

    std::cout << "\nmake24():\n";

    using p = std::pair<hours, bool>;

    for (const auto& [hh, pm] : { p { 1h, 0 }, p { 12h, 0 }, p { 1h, 1 }, p { 12h, 1 } }) {
        std::cout << std::setw(2) << hh.count()
                  << (pm ? "h p.m." : "h a.m.")
                  << " == " << std::setw(2)
                  << make24(hh, pm).count() << "h\n";
    }
}
