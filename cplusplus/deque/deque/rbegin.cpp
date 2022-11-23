// cplusplus link https://cplusplus.com/reference/deque\deque\rbegin
// deque::rbegin/rend
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> mydeque(5); // 5 default-constructed ints

    std::deque<int>::reverse_iterator rit = mydeque.rbegin();

    int i = 0;
    for (rit = mydeque.rbegin(); rit != mydeque.rend(); ++rit)
        *rit = ++i;

    std::cout << "mydeque contains:";
    for (std::deque<int>::iterator it = mydeque.begin(); it != mydeque.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
