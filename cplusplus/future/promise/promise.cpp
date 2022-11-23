// cplusplus link https://cplusplus.com/reference/future\promise\promise
// promise constructors
#include <functional> // std::ref
#include <future> // std::promise, std::future
#include <iostream> // std::cout
#include <memory> // std::allocator, std::allocator_arg
#include <thread> // std::thread

void print_int(std::future<int>& fut)
{
    int x = fut.get();
    std::cout << "value: " << x << '\n';
}

int main()
{
    std::promise<int> foo;
    std::promise<int> bar = std::promise<int>(std::allocator_arg, std::allocator<int>());

    std::future<int> fut = bar.get_future();

    std::thread th(print_int, std::ref(fut));

    bar.set_value(20);

    th.join();
    return 0;
}
