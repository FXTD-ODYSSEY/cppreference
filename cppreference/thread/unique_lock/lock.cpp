// cppreference link https://en.cppreference.com/w/cpp/thread/unique_lock/lock
#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

int main()
{
    int counter = 0;
    std::mutex counter_mutex;
    std::vector<std::thread> threads;

    auto worker_task = [&](int id) {
        std::unique_lock<std::mutex> lock(counter_mutex);
        ++counter;
        std::cout << id << ", initial counter: " << counter << '\n';
        lock.unlock();

        // don't hold the lock while we simulate an expensive operation
        std::this_thread::sleep_for(std::chrono::seconds(1));

        lock.lock();
        ++counter;
        std::cout << id << ", final counter: " << counter << '\n';
    };

    for (int i = 0; i < 10; ++i)
        threads.emplace_back(worker_task, i);

    for (auto& thread : threads)
        thread.join();
}
