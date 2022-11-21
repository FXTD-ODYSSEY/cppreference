// cppreference link https://en.cppreference.com/w/cpp/thread/jthread/join
#include <chrono>
#include <iostream>
#include <thread>

void foo()
{
    // simulate expensive operation
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

void bar()
{
    // simulate expensive operation
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

int main()
{
    std::cout << "starting first helper...\n";
    std::jthread helper1(foo);

    std::cout << "starting second helper...\n";
    std::jthread helper2(bar);

    std::cout << "waiting for helpers to finish..." << std::endl;
    helper1.join();
    helper2.join();

    std::cout << "done!\n";
}
