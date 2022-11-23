// cplusplus link https://cplusplus.com/reference/deque\deque\cbegin
// deque::cbegin/cend
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> mydeque = { 10, 20, 30, 40, 50 };

    std::cout << "mydeque contains:";

    for (auto it = mydeque.cbegin(); it != mydeque.cend(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}
