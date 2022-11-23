// cplusplus link https://cplusplus.com/reference/deque\deque\operator%5B%5D
// deque::operator[] example: reversing order
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> mydeque(10); // 10 zero-initialized elements
    std::deque<int>::size_type sz = mydeque.size();

    // assign some values:
    for (unsigned i = 0; i < sz; i++)
        mydeque[i] = i;

    // reverse order of elements using operator[]:
    for (unsigned i = 0; i < sz / 2; i++) {
        int temp;
        temp = mydeque[sz - 1 - i];
        mydeque[sz - 1 - i] = mydeque[i];
        mydeque[i] = temp;
    }

    // print content:
    std::cout << "mydeque contains:";
    for (unsigned i = 0; i < sz; i++)
        std::cout << ' ' << mydeque[i];
    std::cout << '\n';

    return 0;
}
