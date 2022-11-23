// cplusplus link https://cplusplus.com/reference/map\multimap\rbegin
// multimap::rbegin/rend
#include <iostream>
#include <map>

int main()
{
    std::multimap<char, int> mymultimap;

    mymultimap.insert(std::make_pair('x', 10));
    mymultimap.insert(std::make_pair('y', 20));
    mymultimap.insert(std::make_pair('y', 150));
    mymultimap.insert(std::make_pair('z', 9));

    // show content:
    std::multimap<char, int>::reverse_iterator rit;
    for (rit = mymultimap.rbegin(); rit != mymultimap.rend(); ++rit)
        std::cout << rit->first << " => " << rit->second << '\n';

    return 0;
}
