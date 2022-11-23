// cplusplus link https://cplusplus.com/reference/deque\deque\shrink_to_fit
// deque::shrink_to_fit
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> mydeque(100);
    std::cout << "1. size of mydeque: " << mydeque.size() << '\n';

    mydeque.resize(10);
    std::cout << "2. size of mydeque: " << mydeque.size() << '\n';

    mydeque.shrink_to_fit();

    return 0;
}
