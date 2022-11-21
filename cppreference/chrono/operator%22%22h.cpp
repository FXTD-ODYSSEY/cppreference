// cppreference link https://en.cppreference.com/w/cpp/chrono/operator%22%22h
#include <chrono>
#include <iostream>

int main()
{
    using namespace std::chrono_literals;
    auto day = 24h;
    auto halfhour = 0.5h;
    std::cout << "one day is " << day.count() << " hours\n"
              << "half an hour is " << halfhour.count() << " hours\n";
}
