// cplusplus link https://cplusplus.com/reference/set\multiset\cend
// multiset::cbegin/cend
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> mymultiset = { 10, 20, 30, 20, 10 };

    std::cout << "mymultiset contains:";
    for (auto it = mymultiset.cbegin(); it != mymultiset.cend(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}
