// cppreference link https://en.cppreference.com/w/cpp/chrono/duration/operator_cmp
#include <chrono>
#include <iostream>
int main()
{
    if (std::chrono::seconds(2) == std::chrono::milliseconds(2000))
        std::cout << "2 s == 2000 ms\n";
    else
        std::cout << "2 s!= 2000 ms\n";

    if (std::chrono::seconds(61) > std::chrono::minutes(1))
        std::cout << "61 s > 1 min\n";
    else
        std::cout << "61 s <= 1 min\n";

    using namespace std::chrono_literals;

    static_assert(1h == 60min);
    static_assert(1min == 60s);
    static_assert(1s == 1'000ms);
    static_assert(1ms == 1'000us);
    static_assert(1us == 1'000ns);
}
