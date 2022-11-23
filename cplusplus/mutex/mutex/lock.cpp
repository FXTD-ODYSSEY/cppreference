// cplusplus link https://cplusplus.com/reference/mutex\mutex\lock
// mutex::lock/unlock
#include <iostream> // std::cout
#include <mutex> // std::mutex
#include <thread> // std::thread

std::mutex mtx; // mutex for critical section

void print_thread_id(int id)
{
    // critical section (exclusive access to std::cout signaled by locking mtx):
    mtx.lock();
    std::cout << "thread #" << id << '\n';
    mtx.unlock();
}

int main()
{
    std::thread threads[10];
    // spawn 10 threads:
    for (int i = 0; i < 10; ++i)
        threads[i] = std::thread(print_thread_id, i + 1);

    for (auto& th : threads)
        th.join();

    return 0;
}
