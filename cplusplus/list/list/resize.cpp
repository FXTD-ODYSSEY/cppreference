// cplusplus link https://cplusplus.com/reference/list\list\resize
// resizing list
#include <iostream>
#include <list>

int main()
{
    std::list<int> mylist;

    // set some initial content:
    for (int i = 1; i < 10; ++i)
        mylist.push_back(i);

    mylist.resize(5);
    mylist.resize(8, 100);
    mylist.resize(12);

    std::cout << "mylist contains:";
    for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}
