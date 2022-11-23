// cplusplus link https://cplusplus.com/reference/map\multimap\end
// multimap::begin/end
#include <iostream>
#include <map>

int main()
{
    std::multimap<char, int> mymultimap;

    mymultimap.insert(std::pair<char, int>('a', 10));
    mymultimap.insert(std::pair<char, int>('b', 20));
    mymultimap.insert(std::pair<char, int>('b', 150));

    // show content:
    for (std::multimap<char, int>::iterator it = mymultimap.begin(); it != mymultimap.end(); ++it)
        std::cout << (*it).first << " => " << (*it).second << '\n';

    return 0;
}
