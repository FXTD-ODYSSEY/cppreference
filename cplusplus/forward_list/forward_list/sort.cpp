// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\sort
// forward_list::sort
#include <forward_list>
#include <functional>
#include <iostream>

int main()
{
    std::forward_list<int> mylist = { 22, 13, 5, 40, 90, 62, 31 };

    mylist.sort();

    std::cout << "default sort (operator<):";
    for (int& x : mylist)
        std::cout << ' ' << x;
    std::cout << '\n';

    mylist.sort(std::greater<int>());

    std::cout << "sort with std::greater():";
    for (int& x : mylist)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
