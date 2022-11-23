// cplusplus link https://cplusplus.com/reference/deque\deque\at
// deque::at
#include <deque>
#include <iostream>

int main()
{
    std::deque<unsigned> mydeque(10); // 10 zero-initialized unsigneds

    // assign some values:
    for (unsigned i = 0; i < mydeque.size(); i++)
        mydeque.at(i) = i;

    std::cout << "mydeque contains:";
    for (unsigned i = 0; i < mydeque.size(); i++)
        std::cout << ' ' << mydeque.at(i);

    std::cout << '\n';

    return 0;
}
