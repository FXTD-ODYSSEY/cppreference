// cppreference link https://en.cppreference.com/w/cpp/chrono/time_point
#include <algorithm>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>

void slow_motion()
{
    static int a[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    while (std::ranges::next_permutation(a).found) { } // generates 12! permutations
}

int main()
{
    using namespace std::literals; // enables the usage of 24h, 1ms, 1s instead of
                                   // e.g. std::chrono::hours(24), accordingly
    const std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();

    const std::time_t t_c = std::chrono::system_clock::to_time_t(now - 24h);
    std::cout << "24 hours ago, the time was "
              << std::put_time(std::localtime(&t_c), "%F%T.\n") << std::flush;

    const std::chrono::time_point<std::chrono::steady_clock> start = std::chrono::steady_clock::now();

    std::cout << "Different clocks are not comparable: \n"
              << " System time: " << now.time_since_epoch() << "\n"
              << " Steady time: " << start.time_since_epoch() << "\n";

    slow_motion();

    const auto end = std::chrono::steady_clock::now();
    std::cout
        << "Slow calculations took "
        << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << "µs ≈ "
        << (end - start) / 1ms << "ms ≈ " // almost equivalent form of the above, but
        << (end - start) / 1s << "s.\n"; // using milliseconds and seconds accordingly
}
