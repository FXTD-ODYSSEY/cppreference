// cplusplus link https://cplusplus.com/reference/deque\deque\push_front
// deque::push_front
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> mydeque(2, 100); // two ints with a value of 100
    mydeque.push_front(200);
    mydeque.push_front(300);

    std::cout << "mydeque contains:";
    for (std::deque<int>::iterator it = mydeque.begin(); it != mydeque.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
