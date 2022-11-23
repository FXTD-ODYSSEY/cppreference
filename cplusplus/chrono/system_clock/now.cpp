// cplusplus link https://cplusplus.com/reference/chrono\system_clock\now
// system_clock::now
#include <chrono>
#include <ctime>
#include <iostream>
#include <ratio>

int main()
{
    using namespace std::chrono;

    duration<int, std::ratio<60 * 60 * 24>> one_day(1);

    system_clock::time_point today = system_clock::now();
    system_clock::time_point tomorrow = today + one_day;

    time_t tt;

    tt = system_clock::to_time_t(today);
    std::cout << "today is: " << ctime(&tt);

    tt = system_clock::to_time_t(tomorrow);
    std::cout << "tomorrow will be: " << ctime(&tt);

    return 0;
}
