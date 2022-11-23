// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\begin
// forward_list::begin example
#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> mylist = { 34, 77, 16, 2 };

    std::cout << "mylist contains:";
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}
