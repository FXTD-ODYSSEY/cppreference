// cppreference link https://en.cppreference.com/w/cpp/container/multiset/value_comp
#include <cassert>
#include <iostream>
#include <set>

// Example module 97 key compare function
struct ModCmp {
    bool operator()(const int lhs, const int rhs) const
    {
        return (lhs % 97) < (rhs % 97);
    }
};

int main()
{
    std::multiset<int, ModCmp> cont { 1, 2, 3, 4, 5 };

    // Same behaviour as key_comp()
    auto comp_func = cont.value_comp();

    const int val = 100;

    for (int key : cont) {
        bool before = comp_func(key, val);
        bool after = comp_func(val, key);
        if (!before && !after)
            std::cout << key << " equivalent to key " << val << '\n';
        else if (before)
            std::cout << key << " goes before key " << val << '\n';
        else if (after)
            std::cout << key << " goes after key " << val << '\n';
        else
            assert(0); // Cannot happen
    }
}
