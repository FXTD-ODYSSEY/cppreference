// cplusplus link https://cplusplus.com/reference/set\multiset\value_comp
// multiset::value_comp
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> mymultiset;

    std::multiset<int>::value_compare mycomp = mymultiset.value_comp();

    for (int i = 0; i < 7; i++)
        mymultiset.insert(i);

    std::cout << "mymultiset contains:";

    int highest = *mymultiset.rbegin();
    std::multiset<int>::iterator it = mymultiset.begin();
    do {
        std::cout << ' ' << *it;
    } while (mycomp(*it++, highest));

    std::cout << '\n';

    return 0;
}
