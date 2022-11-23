// cplusplus link https://cplusplus.com/reference/thread\this_thread\sleep_for
// this_thread::sleep_for example
#include <chrono> // std::chrono::seconds
#include <iostream> // std::cout, std::endl
#include <thread> // std::this_thread::sleep_for

int main()
{
    std::cout << "countdown:\n";
    for (int i = 10; i > 0; --i) {
        std::cout << i << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "Lift off!\n";

    return 0;
}
