// cplusplus link https://cplusplus.com/reference/condition_variable\condition_variable_any\wait_for
// condition_variable_any::wait_for example
#include <chrono> // std::chrono::seconds
#include <condition_variable> // std::condition_variable_any, std::cv_status
#include <iostream> // std::cout
#include <mutex> // std::mutex
#include <thread> // std::thread

std::condition_variable_any cv;

int value;

void read_value()
{
    std::cin >> value;
    cv.notify_one();
}

int main()
{
    std::cout << "Please, enter an integer (I'll be printing dots): ";
    std::thread th(read_value);

    std::mutex mtx;
    mtx.lock();
    while (cv.wait_for(mtx, std::chrono::seconds(1)) == std::cv_status::timeout) {
        std::cout << '.';
    }
    std::cout << "You entered: " << value << '\n';
    mtx.unlock();

    th.join();

    return 0;
}
