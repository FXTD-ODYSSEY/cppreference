// cppreference link https://en.cppreference.com/w/cpp/chrono/operator%22%22min
#include <chrono>
#include <iostream>

int main()
{
    using namespace std::chrono_literals;
    auto lesson = 45min;
    auto halfmin = 0.5min;
    std::cout << "one lesson is " << lesson.count() << " minutes\n"
              << "half a minute is " << halfmin.count() << " minutes\n";
}
