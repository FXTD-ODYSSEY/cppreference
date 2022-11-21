// cppreference link https://en.cppreference.com/w/cpp/atomic/atomic_fetch_add
#include <atomic>
#include <chrono>
#include <iostream>
#include <string>
#include <thread>
#include <vector>
using namespace std::chrono_literals;

// meaning of cnt:
// 5: readers and writer are in race. There are no active readers or writers.
// 4...0: there are 1...5 active readers, The writer is blocked.
//-1: writer won the race and readers are blocked.

const int N = 5; // four concurrent readers are allowed
std::atomic<int> cnt(N);

std::vector<int> data;

void reader(int id)
{
    for (;;) {
        // lock
        while (std::atomic_fetch_sub(&cnt, 1) <= 0)
            std::atomic_fetch_add(&cnt, 1);
        // read
        if (!data.empty())
            std::cout << ("reader " + std::to_string(id) + " sees " + std::to_string(*data.rbegin()) + '\n');
        if (data.size() == 25)
            break;
        // unlock
        std::atomic_fetch_add(&cnt, 1);
        // pause
        std::this_thread::sleep_for(1ms);
    }
}

void writer()
{
    for (int n = 0; n < 25; ++n) {
        // lock
        while (std::atomic_fetch_sub(&cnt, N + 1) != N)
            std::atomic_fetch_add(&cnt, N + 1);
        // write
        data.push_back(n);
        std::cout << "writer pushed back " << n << '\n';
        // unlock
        std::atomic_fetch_add(&cnt, N + 1);
        // pause
        std::this_thread::sleep_for(1ms);
    }
}

int main()
{
    std::vector<std::thread> v;
    for (int n = 0; n < N; ++n)
        v.emplace_back(reader, n);
    v.emplace_back(writer);
    for (auto& t : v)
        t.join();
}
