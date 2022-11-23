// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\push_front
// forward_list::push_front
#include <forward_list>
#include <iostream>
using namespace std;

int main()
{
    forward_list<int> mylist = { 77, 2, 16 };
    mylist.push_front(19);
    mylist.push_front(34);

    std::cout << "mylist contains:";
    for (int& x : mylist)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
