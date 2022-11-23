// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\swap
// forward_list::swap
#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> first = { 10, 20, 30 };
    std::forward_list<int> second = { 100, 200 };
    std::forward_list<int>::iterator it;

    first.swap(second);

    std::cout << "first contains:";
    for (int& x : first)
        std::cout << ' ' << x;
    std::cout << '\n';

    std::cout << "second contains:";
    for (int& x : second)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
