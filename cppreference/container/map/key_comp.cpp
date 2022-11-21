// cppreference link https://en.cppreference.com/w/cpp/container/map/key_comp
#include <cassert>
#include <iostream>
#include <map>

// Example module 97 key compare function
struct ModCmp {
    bool operator()(const int lhs, const int rhs) const
    {
        return (lhs % 97) < (rhs % 97);
    }
};

int main()
{
    std::map<int, char, ModCmp> cont;
    cont = { { 1, 'a' }, { 2, 'b' }, { 3, 'c' }, { 4, 'd' }, { 5, 'e' } };

    auto comp_func = cont.key_comp();

    for (auto it : cont) {
        bool before = comp_func(it.first, 100);
        bool after = comp_func(100, it.first);

        std::cout << '(' << it.first << ',' << it.second;
        if (!before && !after)
            std::cout << ") equivalent to key 100\n";
        else if (before)
            std::cout << ") goes before key 100\n";
        else if (after)
            std::cout << ") goes after key 100\n";
        else
            assert(0); // Cannot happen
    }
}
