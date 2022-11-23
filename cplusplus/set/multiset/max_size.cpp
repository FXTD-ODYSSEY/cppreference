// cplusplus link https://cplusplus.com/reference/set\multiset\max_size
// multiset::max_size
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> mymultiset;

    if (mymultiset.max_size() > 1000) {
        for (int i = 0; i < 1000; i++)
            mymultiset.insert(i);
        std::cout << "The multiset contains 1000 elements.\n";
    } else
        std::cout << "The multiset could not hold 1000 elements.\n";

    return 0;
}
