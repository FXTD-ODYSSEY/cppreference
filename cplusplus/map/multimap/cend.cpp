// cplusplus link https://cplusplus.com/reference/map\multimap\cend
// multimap::cbegin/cend
#include <iostream>
#include <map>

int main()
{
    std::multimap<char, int> mymultimap = { { 'x', 100 }, { 'y', 200 }, { 'x', 300 } };

    // print content:
    std::cout << "mymultimap contains:";
    for (auto it = mymultimap.cbegin(); it != mymultimap.cend(); ++it)
        std::cout << " [" << it->first << ':' << it->second << ']';
    std::cout << '\n';

    return 0;
}
