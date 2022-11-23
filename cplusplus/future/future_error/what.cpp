// cplusplus link https://cplusplus.com/reference/future\future_error\what
// future_error::what example:
#include <future> // std::promise, std::future_error
#include <iostream> // std::cout

int main()
{
    std::promise<int> prom;

    try {
        prom.get_future();
        prom.get_future(); // throws std::future_error
    } catch (std::future_error& e) {
        std::cout << "future_error caught: " << e.what() << '\n';
    }

    return 0;
}
