// cplusplus link https://cplusplus.com/reference/queue\queue\swap-free
// swap queues
#include <iostream> // std::cout
#include <queue> // std::queue, std::swap(queue)

int main()
{
    std::queue<int> foo, bar;
    foo.push(10);
    foo.push(20);
    foo.push(30);
    bar.push(111);
    bar.push(222);

    swap(foo, bar);

    std::cout << "size of foo: " << foo.size() << '\n';
    std::cout << "size of bar: " << bar.size() << '\n';

    return 0;
}
