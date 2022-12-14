// cplusplus link https://cplusplus.com/reference/future\future\wait_for
// future::wait_for
#include <chrono> // std::chrono::milliseconds
#include <future> // std::async, std::future
#include <iostream> // std::cout

// a non-optimized way of checking for prime numbers:
bool is_prime(int x)
{
    for (int i = 2; i < x; ++i)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    // call function asynchronously:
    std::future<bool> fut = std::async(is_prime, 700020007);

    // do something while waiting for function to set future:
    std::cout << "checking, please wait";
    std::chrono::milliseconds span(100);
    while (fut.wait_for(span) == std::future_status::timeout)
        std::cout << '.';

    bool x = fut.get();

    std::cout << "\n700020007 " << (x ? "is" : "is not") << " prime.\n";

    return 0;
}
