// cppreference link https://en.cppreference.com/w/cpp/container/multimap/value_comp
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
    std::multimap<int, char, ModCmp> cont;
    cont = { { 1, 'a' }, { 2, 'b' }, { 3, 'c' }, { 4, 'd' }, { 5, 'e' } };

    auto comp_func = cont.value_comp();

    const std::pair<int, char> val = { 100, 'a' };

    for (auto it : cont) {
        bool before = comp_func(it, val);
        bool after = comp_func(val, it);

        std::cout << '(' << it.first << ',' << it.second;
        if (!before && !after)
            std::cout << ") equivalent to key " << val.first << '\n';
        else if (before)
            std::cout << ") goes before key " << val.first << '\n';
        else if (after)
            std::cout << ") goes after key " << val.first << '\n';
        else
            assert(0); // Cannot happen
    }
}
