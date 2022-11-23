// cplusplus link https://cplusplus.com/reference/list\list\crbegin
// list::crbegin/crend
#include <deque>
#include <iostream>

int main()
{
    std::list<int> mylist = { 1, 2, 4, 8, 16 };

    std::cout << "mylist backwards:";
    for (auto rit = mylist.crbegin(); rit != mylist.crend(); ++rit)
        std::cout << ' ' << *rit;
    std::cout << '\n';

    return 0;
}
