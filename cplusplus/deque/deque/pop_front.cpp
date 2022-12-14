// cplusplus link https://cplusplus.com/reference/deque\deque\pop_front
// deque::pop_front
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> mydeque;

    mydeque.push_back(100);
    mydeque.push_back(200);
    mydeque.push_back(300);

    std::cout << "Popping out the elements in mydeque:";
    while (!mydeque.empty()) {
        std::cout << ' ' << mydeque.front();
        mydeque.pop_front();
    }

    std::cout << "\nThe final size of mydeque is " << int(mydeque.size()) << '\n';

    return 0;
}
