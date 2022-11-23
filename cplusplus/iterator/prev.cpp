// cplusplus link https://cplusplus.com/reference/iterator\prev
// prev example
#include <algorithm> // std::for_each
#include <iostream> // std::cout
#include <iterator> // std::next
#include <list> // std::list

int main()
{
    std::list<int> mylist;
    for (int i = 0; i < 10; i++)
        mylist.push_back(i * 10);

    std::cout << "The last element is " << *std::prev(mylist.end()) << '\n';

    return 0;
}
