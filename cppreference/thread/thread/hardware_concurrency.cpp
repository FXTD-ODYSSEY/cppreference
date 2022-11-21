// cppreference link https://en.cppreference.com/w/cpp/thread/thread/hardware_concurrency
#include <iostream>
#include <thread>

int main()
{
    unsigned int n = std::thread::hardware_concurrency();
    std::cout << n << " concurrent threads are supported.\n";
}
