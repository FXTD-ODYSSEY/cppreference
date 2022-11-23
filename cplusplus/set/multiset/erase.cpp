// cplusplus link https://cplusplus.com/reference/set\multiset\erase
// erasing from multiset
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> mymultiset;
    std::multiset<int>::iterator it;

    // insert some values:
    mymultiset.insert(40); // 40
    for (int i = 1; i < 7; i++)
        mymultiset.insert(i * 10); // 10 20 30 40 40 50 60

    it = mymultiset.begin();
    it++; //    ^

    mymultiset.erase(it); // 10 30 40 40 50 60

    mymultiset.erase(40); // 10 30 50 60

    it = mymultiset.find(50);
    mymultiset.erase(it, mymultiset.end()); // 10 30

    std::cout << "mymultiset contains:";
    for (it = mymultiset.begin(); it != mymultiset.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
