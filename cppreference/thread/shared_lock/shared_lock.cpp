// cppreference link https://en.cppreference.com/w/cpp/thread/shared_lock/shared_lock
#include <chrono>
#include <iostream>
#include <shared_mutex>
#include <syncstream>
#include <thread>

std::shared_timed_mutex m;
int i = 10;

void read_shared_var(int id)
{
    // both the threads get access to the integer i
    std::shared_lock<std::shared_timed_mutex> slk(m);
    const int ii = i; // reads global i

    std::osyncstream(std::cout) << "#" << id << " read i as " << ii << "...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
    std::osyncstream(std::cout) << "#" << id << " woke up..." << std::endl;
}

int main()
{
    std::thread r1 { read_shared_var, 1 };
    std::thread r2 { read_shared_var, 2 };

    r1.join();
    r2.join();
}
