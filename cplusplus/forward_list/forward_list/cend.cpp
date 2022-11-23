// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\cend
// forward_list::cbegin/cend example
#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> mylist = { 21, 32, 12 };

    std::cout << "myarray contains:";
    for (auto it = mylist.cbegin(); it != mylist.cend(); ++it)
        std::cout << ' ' << *it; // cannot modify *it

    std::cout << '\n';

    return 0;
}
