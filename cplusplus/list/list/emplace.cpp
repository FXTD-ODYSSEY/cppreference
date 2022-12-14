// cplusplus link https://cplusplus.com/reference/list\list\emplace
// list::emplace
#include <iostream>
#include <list>

int main()
{
    std::list<std::pair<int, char>> mylist;

    mylist.emplace(mylist.begin(), 100, 'x');
    mylist.emplace(mylist.begin(), 200, 'y');

    std::cout << "mylist contains:";
    for (auto& x : mylist)
        std::cout << " (" << x.first << "," << x.second << ")";

    std::cout << '\n';
    return 0;
}
