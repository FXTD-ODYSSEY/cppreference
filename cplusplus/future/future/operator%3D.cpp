// cplusplus link https://cplusplus.com/reference/future\future\operator%3D
// future::operator=
#include <future> // std::async, std::future
#include <iostream> // std::cout

int get_value() { return 10; }

int main()
{
    std::future<int> fut; // default-constructed
    fut = std::async(get_value); // move-assigned

    std::cout << "value: " << fut.get() << '\n';

    return 0;
}
