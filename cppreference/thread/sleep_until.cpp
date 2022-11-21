// cppreference link https://en.cppreference.com/w/cpp/thread/sleep_until
#include <chrono>
#include <iostream>
#include <thread>

auto now() { return std::chrono::steady_clock::now(); }

auto awake_time()
{
    using std::chrono::operator""ms;
    return now() + 2000ms;
}

int main()
{
    std::cout << "Hello, waiter...\n"
              << std::flush;
    const auto start { now() };
    std::this_thread::sleep_until(awake_time());
    std::chrono::duration<double, std::milli> elapsed { now() - start };
    std::cout << "Waited " << elapsed.count() << " ms\n";
}
