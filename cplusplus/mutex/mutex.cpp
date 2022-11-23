// cplusplus link https://cplusplus.com/reference/mutex\mutex
// mutex example
#include <iostream> // std::cout
#include <mutex> // std::mutex
#include <thread> // std::thread

std::mutex mtx; // mutex for critical section

void print_block(int n, char c)
{
    // critical section (exclusive access to std::cout signaled by locking mtx):
    mtx.lock();
    for (int i = 0; i < n; ++i) {
        std::cout << c;
    }
    std::cout << '\n';
    mtx.unlock();
}

int main()
{
    std::thread th1(print_block, 50, '*');
    std::thread th2(print_block, 50, '$');

    th1.join();
    th2.join();

    return 0;
}
