// cppreference link https://en.cppreference.com/w/cpp/thread/sleep_for
#include <chrono>
#include <iostream>
#include <thread>

int main()
{
    using namespace std::chrono_literals;
    std::cout << "Hello waiter\n"
              << std::flush;
    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(2000ms);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;
    std::cout << "Waited " << elapsed.count() << " ms\n";
}
