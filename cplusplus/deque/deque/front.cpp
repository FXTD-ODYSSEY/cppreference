// cplusplus link https://cplusplus.com/reference/deque\deque\front
// deque::front
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> mydeque;

    mydeque.push_front(77);
    mydeque.push_back(20);

    mydeque.front() -= mydeque.back();

    std::cout << "mydeque.front() is now " << mydeque.front() << '\n';

    return 0;
}
