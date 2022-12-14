// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\cbefore_begin
// forward_list::cbefore_begin
#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> mylist = { 77, 2, 16 };

    mylist.insert_after(mylist.cbefore_begin(), 19);

    std::cout << "mylist contains:";
    for (int& x : mylist)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
