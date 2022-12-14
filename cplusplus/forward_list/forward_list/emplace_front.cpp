// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\emplace_front
// forward_list::emplace_front
#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<std::pair<int, char>> mylist;

    mylist.emplace_front(10, 'a');
    mylist.emplace_front(20, 'b');
    mylist.emplace_front(30, 'c');

    std::cout << "mylist contains:";
    for (auto& x : mylist)
        std::cout << " (" << x.first << "," << x.second << ")";

    std::cout << std::endl;
    return 0;
}
