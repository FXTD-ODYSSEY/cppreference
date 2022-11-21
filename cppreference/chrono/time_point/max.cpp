// cppreference link https://en.cppreference.com/w/cpp/chrono/time_point/max
#include <chrono>
#include <iostream>
#include <vector>

int main()
{
    std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
    std::vector<std::chrono::time_point<std::chrono::system_clock>> times {
        now - std::chrono::hours(24),
        now - std::chrono::hours(48),
        now + std::chrono::hours(24),
    };

    std::chrono::time_point<std::chrono::system_clock> earliest = std::chrono::time_point<std::chrono::system_clock>::max();

    std::cout << "all times:\n";
    for (const auto& time : times) {
        std::time_t t = std::chrono::system_clock::to_time_t(time);
        std::cout << std::ctime(&t);

        if (time < earliest)
            earliest = time;
    }

    std::time_t t = std::chrono::system_clock::to_time_t(earliest);
    std::cout << "earliest:\n"
              << std::ctime(&t);
}
