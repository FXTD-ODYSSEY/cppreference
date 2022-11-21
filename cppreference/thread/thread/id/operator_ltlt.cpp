// cppreference link https://en.cppreference.com/w/cpp/thread/thread/id/operator_ltlt
#include <chrono>
#include <iostream>
#include <thread>
using namespace std::chrono;

int main()
{
    std::thread t1([] { std::this_thread::sleep_for(256ms); });
    std::thread t2([] { std::this_thread::sleep_for(512ms); });

    std::clog << t1.get_id() << '\n'
              << t2.get_id() << '\n';

    t1.join();
    t2.join();
}
