// cppreference link https://en.cppreference.com/w/cpp/thread/shared_future/valid
#include <future>
#include <iostream>

int main()
{
    std::promise<void> p;
    std::shared_future<void> f = p.get_future();

    std::cout << std::boolalpha;

    std::cout << f.valid() << '\n';
    p.set_value();
    std::cout << f.valid() << '\n';
    f.get();
    std::cout << f.valid() << '\n';
}
