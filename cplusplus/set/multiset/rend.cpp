// cplusplus link https://cplusplus.com/reference/set\multiset\rend
// multiset::rbegin/rend
#include <iostream>
#include <set>

int main()
{
    int myints[] = { 77, 16, 2, 30, 30 };
    std::multiset<int> mymultiset(myints, myints + 5);

    std::cout << "mymultiset contains:";
    for (std::multiset<int>::reverse_iterator rit = mymultiset.rbegin(); rit != mymultiset.rend(); ++rit)
        std::cout << ' ' << *rit;

    std::cout << '\n';

    return 0;
}
