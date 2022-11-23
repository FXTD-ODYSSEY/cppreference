// cplusplus link https://cplusplus.com/reference/map\multimap\multimap
// constructing multimaps
#include <iostream>
#include <map>

bool fncomp(char lhs, char rhs) { return lhs < rhs; }

struct classcomp {
    bool operator()(const char& lhs, const char& rhs) const
    {
        return lhs < rhs;
    }
};

int main()
{
    std::multimap<char, int> first;

    first.insert(std::pair<char, int>('a', 10));
    first.insert(std::pair<char, int>('b', 15));
    first.insert(std::pair<char, int>('b', 20));
    first.insert(std::pair<char, int>('c', 25));

    std::multimap<char, int> second(first.begin(), first.end());

    std::multimap<char, int> third(second);

    std::multimap<char, int, classcomp> fourth; // class as Compare

    bool (*fn_pt)(char, char) = fncomp;
    std::multimap<char, int, bool (*)(char, char)> fifth(fn_pt); // function pointer as comp

    return 0;
}
