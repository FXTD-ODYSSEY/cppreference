// cplusplus link https://cplusplus.com/reference/iterator\next
// next example
#include <algorithm> // std::for_each
#include <iostream> // std::cout
#include <iterator> // std::next
#include <list> // std::list

int main()
{
    std::list<int> mylist;
    for (int i = 0; i < 10; i++)
        mylist.push_back(i * 10);

    std::cout << "mylist:";
    std::for_each(mylist.begin(),
        std::next(mylist.begin(), 5),
        [](int x) { std::cout << ' ' << x; });

    std::cout << '\n';

    return 0;
}
