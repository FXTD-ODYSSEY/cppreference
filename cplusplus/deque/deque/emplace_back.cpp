// cplusplus link https://cplusplus.com/reference/deque\deque\emplace_back
// deque::emplace_from
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> mydeque = { 10, 20, 30 };

    mydeque.emplace_back(100);
    mydeque.emplace_back(200);

    std::cout << "mydeque contains:";
    for (auto& x : mydeque)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
