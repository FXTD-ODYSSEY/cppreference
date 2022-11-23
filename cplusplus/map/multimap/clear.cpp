// cplusplus link https://cplusplus.com/reference/map\multimap\clear
// multimap::clear
#include <iostream>
#include <map>

int main()
{
    std::multimap<char, int> mymultimap;
    std::multimap<char, int>::iterator it;

    mymultimap.insert(std::pair<char, int>('b', 80));
    mymultimap.insert(std::pair<char, int>('b', 120));
    mymultimap.insert(std::pair<char, int>('q', 360));

    std::cout << "mymultimap contains:\n";
    for (it = mymultimap.begin(); it != mymultimap.end(); ++it)
        std::cout << (*it).first << " => " << (*it).second << '\n';

    mymultimap.clear();

    mymultimap.insert(std::pair<char, int>('a', 11));
    mymultimap.insert(std::pair<char, int>('x', 22));

    std::cout << "mymultimap contains:\n";
    for (it = mymultimap.begin(); it != mymultimap.end(); ++it)
        std::cout << (*it).first << " => " << (*it).second << '\n';

    return 0;
}
