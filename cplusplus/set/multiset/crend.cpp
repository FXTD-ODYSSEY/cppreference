// cplusplus link https://cplusplus.com/reference/set\multiset\crend
// multiset::crbegin/crend
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> mymultiset = { 10, 20, 30, 20, 10 };

    std::cout << "mymultiset backwards:";
    for (auto rit = mymultiset.crbegin(); rit != mymultiset.crend(); ++rit)
        std::cout << ' ' << *rit;

    std::cout << '\n';

    return 0;
}
