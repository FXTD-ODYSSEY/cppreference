// cplusplus link https://cplusplus.com/reference/set\multiset\clear
// multiset::clear
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> mymultiset;

    mymultiset.insert(11);
    mymultiset.insert(42);
    mymultiset.insert(11);

    std::cout << "mymultiset contains:";
    for (std::multiset<int>::iterator it = mymultiset.begin(); it != mymultiset.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    mymultiset.clear();
    mymultiset.insert(200);
    mymultiset.insert(100);

    std::cout << "mymultiset contains:";
    for (std::multiset<int>::iterator it = mymultiset.begin(); it != mymultiset.end(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}
