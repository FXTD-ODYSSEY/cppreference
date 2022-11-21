// cppreference link https://en.cppreference.com/w/cpp/chrono/time_point/time_point_cast
#include <chrono>
#include <iostream>
using namespace std::chrono_literals;

using Clock = std::chrono::high_resolution_clock;
using Ms = std::chrono::milliseconds;
using Sec = std::chrono::seconds;

template <class Duration>
using TimePoint = std::chrono::time_point<Clock, Duration>;

inline void print_ms(const TimePoint<Ms>& time_point)
{
    std::cout << time_point.time_since_epoch().count() << " ms\n";
}

int main()
{
    TimePoint<Sec> time_point_sec { 4s };

    // implicit cast, no precision loss
    TimePoint<Ms> time_point_ms { time_point_sec };
    print_ms(time_point_ms); // 4000 ms

    time_point_ms = TimePoint<Ms> { 5756ms };
    print_ms(time_point_ms); // 5756 ms

    // explicit cast, need when precision loss may happen
    // 5756 truncated to 5000
    time_point_sec = std::chrono::time_point_cast<Sec>(time_point_ms);
    print_ms(time_point_sec); // 5000 ms
}
