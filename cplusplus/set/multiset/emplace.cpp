// cplusplus link https://cplusplus.com/reference/set\multiset\emplace
// multiset::emplace
#include <iostream>
#include <set>
#include <string>

int main()
{
    std::multiset<std::string> mymultiset;

    mymultiset.emplace("foo");
    mymultiset.emplace("bar");
    mymultiset.emplace("foo");

    std::cout << "mymultiset contains:";
    for (const std::string& x : mymultiset)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
