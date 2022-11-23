// cplusplus link https://cplusplus.com/reference/deque\deque\push_back
// deque::push_back
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> mydeque;
    int myint;

    std::cout << "Please enter some integers (enter 0 to end):\n";

    do {
        std::cin >> myint;
        mydeque.push_back(myint);
    } while (myint);

    std::cout << "mydeque stores " << (int)mydeque.size() << " numbers.\n";

    return 0;
}
