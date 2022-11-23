// cplusplus link https://cplusplus.com/reference/map\multimap\insert
// multimap::insert (C++98)
#include <iostream>
#include <map>

int main()
{
    std::multimap<char, int> mymultimap;
    std::multimap<char, int>::iterator it;

    // first insert function version (single parameter):
    mymultimap.insert(std::pair<char, int>('a', 100));
    mymultimap.insert(std::pair<char, int>('z', 150));
    it = mymultimap.insert(std::pair<char, int>('b', 75));

    // second insert function version (with hint position):
    mymultimap.insert(it, std::pair<char, int>('c', 300)); // max efficiency inserting
    mymultimap.insert(it, std::pair<char, int>('z', 400)); // no max efficiency inserting

    // third insert function version (range insertion):
    std::multimap<char, int> anothermultimap;
    anothermultimap.insert(mymultimap.begin(), mymultimap.find('c'));

    // showing contents:
    std::cout << "mymultimap contains:\n";
    for (it = mymultimap.begin(); it != mymultimap.end(); ++it)
        std::cout << (*it).first << " => " << (*it).second << '\n';

    std::cout << "anothermultimap contains:\n";
    for (it = anothermultimap.begin(); it != anothermultimap.end(); ++it)
        std::cout << (*it).first << " => " << (*it).second << '\n';

    return 0;
}
