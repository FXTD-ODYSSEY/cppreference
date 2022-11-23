// cplusplus link https://cplusplus.com/reference/mutex\unique_lock\try_lock
// unique_lock::try_lock example
#include <iostream> // std::cout
#include <mutex> // std::mutex, std::unique_lock, std::defer_lock
#include <thread> // std::thread
#include <vector> // std::vector

std::mutex mtx; // mutex for critical section

void print_star()
{
    std::unique_lock<std::mutex> lck(mtx, std::defer_lock);
    // print '*' if successfully locked, 'x' otherwise:
    if (lck.try_lock())
        std::cout << '*';
    else
        std::cout << 'x';
}

int main()
{
    std::vector<std::thread> threads;
    for (int i = 0; i < 500; ++i)
        threads.emplace_back(print_star);

    for (auto& x : threads)
        x.join();

    return 0;
}
