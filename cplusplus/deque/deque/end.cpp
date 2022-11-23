// cplusplus link https://cplusplus.com/reference/deque\deque\end
// deque::end
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> mydeque;

    for (int i = 1; i <= 5; i++)
        mydeque.insert(mydeque.end(), i);

    std::cout << "mydeque contains:";

    std::deque<int>::iterator it = mydeque.begin();

    while (it != mydeque.end())
        std::cout << ' ' << *it++;

    std::cout << '\n';

    return 0;
}
