// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\remove
// remove from forward_list
#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> mylist = { 10, 20, 30, 40, 30, 20, 10 };

    mylist.remove(20);

    std::cout << "mylist contains:";
    for (int& x : mylist)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
