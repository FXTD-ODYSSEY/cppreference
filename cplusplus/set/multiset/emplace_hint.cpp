// cplusplus link https://cplusplus.com/reference/set\multiset\emplace_hint
// multiset::emplace_hint
#include <iostream>
#include <set>
#include <string>

int main()
{
    std::multiset<std::string> mymultiset;
    auto it = mymultiset.cbegin();

    mymultiset.emplace_hint(it, "apple");
    it = mymultiset.emplace_hint(mymultiset.cend(), "orange");
    it = mymultiset.emplace_hint(it, "melon");
    mymultiset.emplace_hint(it, "melon");

    std::cout << "mymultiset contains:";
    for (const std::string& x : mymultiset)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
