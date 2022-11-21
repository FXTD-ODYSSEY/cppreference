// cppreference link https://en.cppreference.com/w/cpp/io/basic_ostream/flush
#include <chrono>
#include <iostream>
#include <thread>
using namespace std::chrono_literals;

void f()
{
    std::cout << "Output from thread... ";
    for (int i { 1 }; i != 10; ++i) {
        std::this_thread::sleep_for(250ms);
        std::cout << i << ' ';
        // output three numbers at once;
        // the effect is observable only in real-time
        if (0 == (i % 3)) {
            std::cout.flush();
        }
    }
    std::cout << std::endl; // flushes as well
}

int main()
{
    std::thread tr { f };
    std::this_thread::sleep_for(150ms);
    std::clog << "Output from main\n";
    tr.join();
}
