// cplusplus link https://cplusplus.com/reference/set\multiset\begin
// multiset::begin/end
#include <iostream>
#include <set>

int main()
{
    int myints[] = { 42, 71, 71, 71, 12 };
    std::multiset<int> mymultiset(myints, myints + 5);

    std::multiset<int>::iterator it;

    std::cout << "mymultiset contains:";
    for (std::multiset<int>::iterator it = mymultiset.begin(); it != mymultiset.end(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}
