// cplusplus link https://cplusplus.com/reference/deque\deque\pop_back
// deque::pop_back
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> mydeque;
    int sum(0);
    mydeque.push_back(10);
    mydeque.push_back(20);
    mydeque.push_back(30);

    while (!mydeque.empty()) {
        sum += mydeque.back();
        mydeque.pop_back();
    }

    std::cout << "The elements of mydeque add up to " << sum << '\n';

    return 0;
}
