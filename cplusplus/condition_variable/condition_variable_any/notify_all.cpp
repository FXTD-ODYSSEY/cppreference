// cplusplus link https://cplusplus.com/reference/condition_variable\condition_variable_any\notify_all
// condition_variable_any::notify_all
#include <condition_variable> // std::condition_variable_any
#include <iostream> // std::cout
#include <mutex> // std::mutex
#include <thread> // std::thread

std::mutex mtx;
std::condition_variable_any cv;
bool ready = false;

void print_id(int id)
{
    mtx.lock();
    while (!ready)
        cv.wait(mtx);
    // ...
    std::cout << "thread " << id << '\n';
    mtx.unlock();
}

void go()
{
    mtx.lock();
    ready = true;
    cv.notify_all();
    mtx.unlock();
}

int main()
{
    std::thread threads[10];
    // spawn 10 threads:
    for (int i = 0; i < 10; ++i)
        threads[i] = std::thread(print_id, i);

    std::cout << "10 threads ready to race...\n";
    go(); // go!

    for (auto& th : threads)
        th.join();

    return 0;
}
