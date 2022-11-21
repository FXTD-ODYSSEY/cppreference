// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/equal_range
#include <algorithm>
#include <compare>
#include <iostream>
#include <vector>

struct S {
    int number;
    char name;
    // note: name is ignored by these comparison operators
    friend bool operator==(const S s1, const S s2) { return s1.number == s2.number; }
    friend auto operator<=>(const S s1, const S s2) { return s1.number <=> s2.number; }
};

int main()
{
    // note: not ordered, only partitioned w.r.t. S defined below
    std::vector<S> vec = { { 1, 'A' }, { 2, 'B' }, { 2, 'C' }, { 2, 'D' }, { 4, 'D' }, { 4, 'G' }, { 3, 'F' } };

    const S value = { 2, '?' };

    namespace ranges = std::ranges;

    {
        auto p = ranges::equal_range(vec, value);
        std::cout << "1. ";
        for (auto i : p)
            std::cout << i.name << ' ';
    }
    {
        auto p = ranges::equal_range(vec.begin(), vec.end(), value);
        std::cout << "\n2. ";
        for (auto i = p.begin(); i != p.end(); ++i)
            std::cout << i->name << ' ';
    }
    {
        auto p = ranges::equal_range(vec, 'D', ranges::less {}, &S::name);
        std::cout << "\n3. ";
        for (auto i : p)
            std::cout << i.name << ' ';
    }
    {
        auto p = ranges::equal_range(vec.begin(), vec.end(), 'D', ranges::less {}, &S::name);
        std::cout << "\n4. ";
        for (auto i = p.begin(); i != p.end(); ++i)
            std::cout << i->name << ' ';
    }
}
