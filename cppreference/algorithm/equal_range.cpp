// cppreference link https://en.cppreference.com/w/cpp/algorithm/equal_range
#include <algorithm>
#include <iostream>
#include <vector>

struct S {
    int number;
    char name;
    // note: name is ignored by this comparison operator
    bool operator<(const S& s) const { return number < s.number; }
};

struct Comp {
    bool operator()(const S& s, int i) const { return s.number < i; }
    bool operator()(int i, const S& s) const { return i < s.number; }
};

int main()
{
    // note: not ordered, only partitioned w.r.t. S defined below
    const std::vector<S> vec = { { 1, 'A' }, { 2, 'B' }, { 2, 'C' },
        { 2, 'D' }, { 4, 'G' }, { 3, 'F' } };
    const S value = { 2, '?' };

    std::cout << "Compare using S::operator<(): ";
    const auto p = std::equal_range(vec.begin(), vec.end(), value);

    for (auto i = p.first; i != p.second; ++i)
        std::cout << i->name << ' ';

    std::cout << "\n"
                 "Using heterogeneous comparison: ";
    const auto p2 = std::equal_range(vec.begin(), vec.end(), 2, Comp {});

    for (auto i = p2.first; i != p2.second; ++i)
        std::cout << i->name << ' ';
}
