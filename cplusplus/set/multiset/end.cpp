// cplusplus link https://cplusplus.com/reference/set\multiset\end
// multiset::begin/end
#include <iostream>
#include <set>

int main()
{
    int myints[] = { 15, 98, 77, 77, 39 };
    std::multiset<int> mymultiset(myints, myints + 5);

    std::cout << "mymultiset contains:";
    for (std::multiset<int>::iterator it = mymultiset.begin(); it != mymultiset.end(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}
