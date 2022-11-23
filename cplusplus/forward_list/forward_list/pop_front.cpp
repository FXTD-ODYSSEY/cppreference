// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\pop_front
// forward_list::pop_front
#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> mylist = { 10, 20, 30, 40 };

    std::cout << "Popping out the elements in mylist:";
    while (!mylist.empty()) {
        std::cout << ' ' << mylist.front();
        mylist.pop_front();
    }

    std::cout << '\n';

    return 0;
}
