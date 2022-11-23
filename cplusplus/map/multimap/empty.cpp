// cplusplus link https://cplusplus.com/reference/map\multimap\empty
// multimap::empty
#include <iostream>
#include <map>

int main()
{
    std::multimap<char, int> mymultimap;

    mymultimap.insert(std::pair<char, int>('b', 101));
    mymultimap.insert(std::pair<char, int>('b', 202));
    mymultimap.insert(std::pair<char, int>('q', 505));

    while (!mymultimap.empty()) {
        std::cout << mymultimap.begin()->first << " => ";
        std::cout << mymultimap.begin()->second << '\n';
        mymultimap.erase(mymultimap.begin());
    }

    return 0;
}
