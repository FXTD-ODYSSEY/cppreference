// cplusplus link https://cplusplus.com/reference/deque\deque\empty
// deque::empty
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> mydeque;
    int sum(0);

    for (int i = 1; i <= 10; i++)
        mydeque.push_back(i);

    while (!mydeque.empty()) {
        sum += mydeque.front();
        mydeque.pop_front();
    }

    std::cout << "total: " << sum << '\n';

    return 0;
}
