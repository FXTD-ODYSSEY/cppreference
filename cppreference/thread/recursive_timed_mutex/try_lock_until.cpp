// cppreference link https://en.cppreference.com/w/cpp/thread/recursive_timed_mutex/try_lock_until
#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>

std::recursive_timed_mutex test_mutex;

void f()
{
    auto now = std::chrono::steady_clock::now();
    test_mutex.try_lock_until(now + std::chrono::seconds(10));
    std::cout << "hello world\n";
}

int main()
{
    std::lock_guard<std::recursive_timed_mutex> l(test_mutex);
    std::thread t(f);
    t.join();
}
