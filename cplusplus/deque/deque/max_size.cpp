// cplusplus link https://cplusplus.com/reference/deque\deque\max_size
// deque::max_size
#include <deque>
#include <iostream>

int main()
{
    unsigned int i;
    std::deque<int> mydeque;

    std::cout << "Enter number of elements: ";
    std::cin >> i;

    if (i < mydeque.max_size())
        mydeque.resize(i);
    else
        std::cout << "That size exceeds the limit.\n";

    return 0;
}
