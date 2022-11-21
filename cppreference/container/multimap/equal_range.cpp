// cppreference link https://en.cppreference.com/w/cpp/container/multimap/equal_range
#include <iostream>
#include <map>

int main()
{
    std::multimap<int, char> dict {
        { 1, 'A' },
        { 2, 'B' },
        { 2, 'C' },
        { 2, 'D' },
        { 4, 'E' },
        { 3, 'F' }
    };

    auto range = dict.equal_range(2);

    for (auto i = range.first; i != range.second; ++i) {
        std::cout << i->first << ": " << i->second << '\n';
    }
}
