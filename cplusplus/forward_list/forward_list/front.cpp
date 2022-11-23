// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\front
// forward_list::front
#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> mylist = { 2, 16, 77 };

    mylist.front() = 11;

    std::cout << "mylist now contains:";
    for (int& x : mylist)
        std::cout << ' ' << x;

    std::cout << '\n';

    return 0;
}
