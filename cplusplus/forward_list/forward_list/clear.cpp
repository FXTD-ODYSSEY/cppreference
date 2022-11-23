// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\clear
// clearing forward_list
#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> mylist = { 10, 20, 30 };

    std::cout << "mylist contains:";
    for (int& x : mylist)
        std::cout << ' ' << x;
    std::cout << '\n';

    mylist.clear();
    mylist.insert_after(mylist.before_begin(), { 100, 200 });

    std::cout << "mylist contains:";
    for (int& x : mylist)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
