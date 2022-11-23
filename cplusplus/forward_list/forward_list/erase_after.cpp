// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\erase_after
// erasing from forward_list
#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> mylist = { 10, 20, 30, 40, 50 };

    // 10 20 30 40 50
    auto it = mylist.begin(); // ^

    it = mylist.erase_after(it); // 10 30 40 50
                                 //    ^
    it = mylist.erase_after(it, mylist.end()); // 10 30
                                               //       ^

    std::cout << "mylist contains:";
    for (int& x : mylist)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
