// cplusplus link https://cplusplus.com/reference/mutex\unique_lock\unlock
// unique_lock::lock/unlock
#include <iostream> // std::cout
#include <mutex> // std::mutex, std::unique_lock, std::defer_lock
#include <thread> // std::thread

std::mutex mtx; // mutex for critical section

void print_thread_id(int id)
{
    std::unique_lock<std::mutex> lck(mtx, std::defer_lock);
    // critical section (exclusive access to std::cout signaled by locking lck):
    lck.lock();
    std::cout << "thread #" << id << '\n';
    lck.unlock();
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
