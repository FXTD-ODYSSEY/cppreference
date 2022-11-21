// cppreference link https://en.cppreference.com/w/cpp/algorithm/move
#include <algorithm>
#include <chrono>
#include <iostream>
#include <iterator>
#include <list>
#include <thread>
#include <vector>

void f(int n)
{
    std::this_thread::sleep_for(std::chrono::seconds(n));
    std::cout << "thread " << n << " ended" << std::endl;
}

int main()
{
    std::vector<std::thread> v;
    v.emplace_back(f, 1);
    v.emplace_back(f, 2);
    v.emplace_back(f, 3);
    std::list<std::thread> l;

    // copy() would not compile, because std::thread is noncopyable
    std::move(v.begin(), v.end(), std::back_inserter(l));
    for (auto& t : l)
        t.join();
}
