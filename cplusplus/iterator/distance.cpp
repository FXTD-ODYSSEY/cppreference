// cplusplus link https://cplusplus.com/reference/iterator\distance
// advance example
#include <iostream> // std::cout
#include <iterator> // std::distance
#include <list> // std::list

int main()
{
    std::list<int> mylist;
    for (int i = 0; i < 10; i++)
        mylist.push_back(i * 10);

    std::list<int>::iterator first = mylist.begin();
    std::list<int>::iterator last = mylist.end();

    std::cout << "The distance is: " << std::distance(first, last) << '\n';

    return 0;
}
