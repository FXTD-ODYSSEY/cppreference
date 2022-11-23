// cplusplus link https://cplusplus.com/reference/set\multiset\count
// multiset::count
#include <iostream>
#include <set>

int main()
{
    int myints[] = { 10, 73, 12, 22, 73, 73, 12 };
    std::multiset<int> mymultiset(myints, myints + 7);

    std::cout << "73 appears " << mymultiset.count(73) << " times in mymultiset.\n";

    return 0;
}
