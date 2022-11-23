// cplusplus link https://cplusplus.com/reference/map\multimap\value_comp
// multimap::value_comp
#include <iostream>
#include <map>

int main()
{
    std::multimap<char, int> mymultimap;

    mymultimap.insert(std::make_pair('x', 101));
    mymultimap.insert(std::make_pair('y', 202));
    mymultimap.insert(std::make_pair('y', 252));
    mymultimap.insert(std::make_pair('z', 303));

    std::cout << "mymultimap contains:\n";

    std::pair<char, int> highest = *mymultimap.rbegin(); // last element

    std::multimap<char, int>::iterator it = mymultimap.begin();
    do {
        std::cout << (*it).first << " => " << (*it).second << '\n';
    } while (mymultimap.value_comp()(*it++, highest));

    return 0;
}
