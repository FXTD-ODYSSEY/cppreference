// cplusplus link https://cplusplus.com/reference/map\multimap\find
// multimap::find
#include <iostream>
#include <map>

int main()
{
    std::multimap<char, int> mymm;

    mymm.insert(std::make_pair('x', 10));
    mymm.insert(std::make_pair('y', 20));
    mymm.insert(std::make_pair('z', 30));
    mymm.insert(std::make_pair('z', 40));

    std::multimap<char, int>::iterator it = mymm.find('x');
    mymm.erase(it);
    mymm.erase(mymm.find('z'));

    // print content:
    std::cout << "elements in mymm:" << '\n';
    std::cout << "y => " << mymm.find('y')->second << '\n';
    std::cout << "z => " << mymm.find('z')->second << '\n';

    return 0;
}
