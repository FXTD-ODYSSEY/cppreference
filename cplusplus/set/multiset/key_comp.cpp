// cplusplus link https://cplusplus.com/reference/set\multiset\key_comp
// multiset::key_comp
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> mymultiset;

    for (int i = 0; i < 5; i++)
        mymultiset.insert(i);

    std::multiset<int>::key_compare mycomp = mymultiset.key_comp();

    std::cout << "mymultiset contains:";

    int highest = *mymultiset.rbegin();

    std::multiset<int>::iterator it = mymultiset.begin();
    do {
        std::cout << ' ' << *it;
    } while (mycomp(*it++, highest));

    std::cout << '\n';

    return 0;
}
