// cppreference link https://en.cppreference.com/w/cpp/chrono/operator%22%22ms
#include <chrono>
#include <iostream>

int main()
{
    using namespace std::chrono_literals;
    auto d1 = 250ms;
    std::chrono::milliseconds d2 = 1s;
    std::cout << "250ms = " << d1.count() << " milliseconds\n"
              << "1s = " << d2.count() << " milliseconds\n";
}
