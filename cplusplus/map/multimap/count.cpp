// cplusplus link https://cplusplus.com/reference/map\multimap\count
// multimap::count
#include <iostream>
#include <map>

int main()
{
    std::multimap<char, int> mymm;

    mymm.insert(std::make_pair('x', 50));
    mymm.insert(std::make_pair('y', 100));
    mymm.insert(std::make_pair('y', 150));
    mymm.insert(std::make_pair('y', 200));
    mymm.insert(std::make_pair('z', 250));
    mymm.insert(std::make_pair('z', 300));

    for (char c = 'x'; c <= 'z'; c++) {
        std::cout << "There are " << mymm.count(c) << " elements with key " << c << ":";
        std::multimap<char, int>::iterator it;
        for (it = mymm.equal_range(c).first; it != mymm.equal_range(c).second; ++it)
            std::cout << ' ' << (*it).second;
        std::cout << '\n';
    }

    return 0;
}
