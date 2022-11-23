// cplusplus link https://cplusplus.com/reference/future\future_errc\make_error_condition
// std::future_errc example:
#include <future> // std::promise, std::future_error, std::future_errc
#include <iostream> // std::cerr

int main()
{
    std::promise<int> prom;

    try {
        prom.get_future();
        prom.get_future(); // throws std::future_error with future_already_retrieved
    } catch (std::future_error& e) {
        if (e.code() == std::make_error_condition(std::future_errc::future_already_retrieved))
            std::cerr << "[future already retrieved]\n";
        else
            std::cerr << "[unknown exception]\n";
    }

    return 0;
}
