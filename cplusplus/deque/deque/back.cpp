// cplusplus link https://cplusplus.com/reference/deque\deque\back
// deque::back
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> mydeque;

    mydeque.push_back(10);

    while (mydeque.back() != 0)
        mydeque.push_back(mydeque.back() - 1);

    std::cout << "mydeque contains:";

    for (std::deque<int>::iterator it = mydeque.begin(); it != mydeque.end(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}
