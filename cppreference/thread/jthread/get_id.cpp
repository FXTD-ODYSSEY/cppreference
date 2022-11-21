// cppreference link https://en.cppreference.com/w/cpp/thread/jthread/get_id
#include <chrono>
#include <iostream>
#include <thread>

void foo()
{
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

int main()
{
    std::jthread t1(foo);
    std::jthread::id t1_id = t1.get_id();

    std::jthread t2(foo);
    std::jthread::id t2_id = t2.get_id();

    std::cout << "t1's id: " << t1_id << '\n';
    std::cout << "t2's id: " << t2_id << '\n';
}
