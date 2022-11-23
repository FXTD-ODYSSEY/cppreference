// cplusplus link https://cplusplus.com/reference/set\multiset\upper_bound
// multiset::lower_bound/upper_bound
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> mymultiset;
    std::multiset<int>::iterator itlow, itup;

    for (int i = 1; i < 8; i++)
        mymultiset.insert(i * 10); // 10 20 30 40 50 60 70

    itlow = mymultiset.lower_bound(30); //       ^
    itup = mymultiset.upper_bound(40); //             ^

    mymultiset.erase(itlow, itup); // 10 20 50 60 70

    std::cout << "mymultiset contains:";
    for (std::multiset<int>::iterator it = mymultiset.begin(); it != mymultiset.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
