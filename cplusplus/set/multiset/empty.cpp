// cplusplus link https://cplusplus.com/reference/set\multiset\empty
// multiset::empty
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> mymultiset;

    mymultiset.insert(10);
    mymultiset.insert(20);
    mymultiset.insert(10);

    std::cout << "mymultiset contains:";
    while (!mymultiset.empty()) {
        std::cout << ' ' << *mymultiset.begin();
        mymultiset.erase(mymultiset.begin());
    }
    std::cout << '\n';

    return 0;
}
