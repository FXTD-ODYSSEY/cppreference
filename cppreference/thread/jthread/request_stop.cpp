// cppreference link https://en.cppreference.com/w/cpp/thread/jthread/request_stop
#include <chrono>
#include <condition_variable>
#include <iostream>
#include <mutex>
#include <thread>

using namespace std::chrono_literals;

int main()
{
    // A sleepy worker thread
    std::jthread sleepy_worker([](std::stop_token stoken) {
        for (int i = 10; i; --i) {
            std::this_thread::sleep_for(300ms);
            if (stoken.stop_requested()) {
                std::cout << "Sleepy worker is requested to stop\n";
                return;
            }
            std::cout << "Sleepy worker goes back to sleep\n";
        }
    });

    // A waiting worker thread
    // The condition variable will be awoken by the stop request.
    std::jthread waiting_worker([](std::stop_token stoken) {
        std::mutex mutex;
        std::unique_lock lock(mutex);
        std::condition_variable_any().wait(lock, stoken,
            [&stoken] { return false; });
        if (stoken.stop_requested()) {
            std::cout << "Waiting worker is requested to stop\n";
            return;
        }
    });

    // std::jthread::request_stop() can be called explicitly:
    std::cout << "Requesting stop of sleepy worker\n";
    sleepy_worker.request_stop();
    sleepy_worker.join();
    std::cout << "Sleepy worker joined\n";

    // Or automatically using RAII:
    // waiting_worker's destructor will call request_stop()
    // and join the thread automatically.
}
