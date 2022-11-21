// cppreference link https://en.cppreference.com/w/cpp/atomic/atomic/exchange
#include <algorithm>
#include <atomic>
#include <cstddef>
#include <iostream>
#include <syncstream>
#include <thread>
#include <vector>

int main()
{
    const std::size_t ThreadNumber = 5;
    const int Sum = 5;
    std::atomic<int> atom { 0 };
    std::atomic<int> counter { 0 };

    // lambda as thread proc
    auto lambda = [&](const int id) {
        for (int next = 0; next < Sum;) {
            // each thread is writing a value from its own knowledge
            const int current = atom.exchange(next);
            counter++;
            // sync writing to prevent from interrupting by other threads
            std::osyncstream(std::cout)
                << '#' << id << " (" << std::this_thread::get_id()
                << ") wrote " << next << " replacing the old value "
                << current << '\n';
            next = std::max(current, next) + 1;
        }
    };

    std::vector<std::thread> v;
    for (std::size_t i = 0; i < ThreadNumber; ++i) {
        v.emplace_back(lambda, i);
    }

    for (auto& tr : v) {
        tr.join();
    }

    std::cout << ThreadNumber << " threads adding 0 to "
              << Sum << " takes total "
              << counter << " times\n";
}
