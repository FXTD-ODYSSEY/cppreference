// cplusplus link https://cplusplus.com/reference/set\multiset\insert
// multiset::insert (C++98)
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> mymultiset;
    std::multiset<int>::iterator it;

    // set some initial values:
    for (int i = 1; i <= 5; i++)
        mymultiset.insert(i * 10); // 10 20 30 40 50

    it = mymultiset.insert(25);

    it = mymultiset.insert(it, 27); // max efficiency inserting
    it = mymultiset.insert(it, 29); // max efficiency inserting
    it = mymultiset.insert(it, 24); // no max efficiency inserting (24<29)

    int myints[] = { 5, 10, 15 };
    mymultiset.insert(myints, myints + 3);

    std::cout << "mymultiset contains:";
    for (it = mymultiset.begin(); it != mymultiset.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
