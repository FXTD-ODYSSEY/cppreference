// cplusplus link https://cplusplus.com/reference/map\multimap\erase
// erasing from multimap
#include <iostream>
#include <map>

int main()
{
    std::multimap<char, int> mymultimap;

    // insert some values:
    mymultimap.insert(std::pair<char, int>('a', 10));
    mymultimap.insert(std::pair<char, int>('b', 20));
    mymultimap.insert(std::pair<char, int>('b', 30));
    mymultimap.insert(std::pair<char, int>('c', 40));
    mymultimap.insert(std::pair<char, int>('d', 50));
    mymultimap.insert(std::pair<char, int>('d', 60));
    mymultimap.insert(std::pair<char, int>('e', 70));
    mymultimap.insert(std::pair<char, int>('f', 80));

    std::multimap<char, int>::iterator it = mymultimap.find('b');

    mymultimap.erase(it); // erasing by iterator (1 element)

    mymultimap.erase('d'); // erasing by key (2 elements)

    it = mymultimap.find('e');
    mymultimap.erase(it, mymultimap.end()); // erasing by range

    // show content:
    for (it = mymultimap.begin(); it != mymultimap.end(); ++it)
        std::cout << (*it).first << " => " << (*it).second << '\n';

    return 0;
}
