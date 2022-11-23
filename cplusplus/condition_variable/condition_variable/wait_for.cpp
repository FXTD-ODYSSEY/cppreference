// cplusplus link https://cplusplus.com/reference/condition_variable\condition_variable\wait_for
// condition_variable::wait_for example
#include <chrono> // std::chrono::seconds
#include <condition_variable> // std::condition_variable, std::cv_status
#include <iostream> // std::cout
#include <mutex> // std::mutex, std::unique_lock
#include <thread> // std::thread

std::condition_variable cv;

int value;

void read_value()
{
    std::cin >> value;
    cv.notify_one();
}

int main()
{
    std::cout << "Please, enter an integer (I'll be printing dots): \n";
    std::thread th(read_value);

    std::mutex mtx;
    std::unique_lock<std::mutex> lck(mtx);
    while (cv.wait_for(lck, std::chrono::seconds(1)) == std::cv_status::timeout) {
        std::cout << '.' << std::endl;
    }
    std::cout << "You entered: " << value << '\n';

    th.join();

    return 0;
}
