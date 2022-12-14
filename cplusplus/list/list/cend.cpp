// cplusplus link https://cplusplus.com/reference/list\list\cend
// list::cbegin/cend
#include <iostream>
#include <list>

int main()
{
    std::list<int> mylist = { 5, 10, 15, 20 };

    std::cout << "mylist contains:";

    for (auto it = mylist.cbegin(); it != mylist.cend(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}
