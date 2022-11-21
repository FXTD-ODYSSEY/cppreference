// cppreference link https://en.cppreference.com/w/cpp/container/multiset/deduction_guides
#include <set>
int main()
{
    std::multiset s = { 1, 2, 3, 4 }; // guide #2 deduces std::multiset<int>
    std::multiset s2(s.begin(), s.end()); // guide #1 deduces std::multiset<int>
}
