// cplusplus link https://cplusplus.com/reference/future\launch
// launch::async vs launch::deferred
#include <chrono> // std::chrono::milliseconds
#include <future> // std::async, std::future, std::launch
#include <iostream> // std::cout
#include <thread> // std::this_thread::sleep_for

void print_ten(char c, int ms)
{
    for (int i = 0; i < 10; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(ms));
        std::cout << c;
    }
}

int main()
{
    std::cout << "with launch::async:\n";
    std::future<void> foo = std::async(std::launch::async, print_ten, '*', 100);
    std::future<void> bar = std::async(std::launch::async, print_ten, '@', 200);
    // async "get" (wait for foo and bar to be ready):
    foo.get();
    bar.get();
    std::cout << "\n\n";

    std::cout << "with launch::deferred:\n";
    foo = std::async(std::launch::deferred, print_ten, '*', 100);
    bar = std::async(std::launch::deferred, print_ten, '@', 200);
    // deferred "get" (perform the actual calls):
    foo.get();
    bar.get();
    std::cout << '\n';

    return 0;
}
