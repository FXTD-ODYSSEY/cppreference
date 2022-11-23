// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\end
// forward_list::end example
#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> mylist = { 10, 20, 30, 40 };

    std::cout << "mylist contains:";
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}
