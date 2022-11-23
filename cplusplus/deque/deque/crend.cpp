// cplusplus link https://cplusplus.com/reference/deque\deque\crend
// deque::crbegin/crend
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> mydeque = { 1, 2, 3, 4, 5 };

    std::cout << "mydeque backwards:";
    for (auto rit = mydeque.crbegin(); rit != mydeque.crend(); ++rit)
        std::cout << ' ' << *rit;
    std::cout << '\n';

    return 0;
}
