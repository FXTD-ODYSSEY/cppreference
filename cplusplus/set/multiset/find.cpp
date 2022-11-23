// cplusplus link https://cplusplus.com/reference/set\multiset\find
// multiset::find
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> mymultiset;
    std::multiset<int>::iterator it;

    // set some initial values:
    for (int i = 1; i <= 5; i++)
        mymultiset.insert(i * 10); // 10 20 30 40 50

    it = mymultiset.find(20);
    mymultiset.erase(it);
    mymultiset.erase(mymultiset.find(40));

    std::cout << "mymultiset contains:";
    for (it = mymultiset.begin(); it != mymultiset.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
