// cppreference link https://en.cppreference.com/w/cpp/container/unordered_multiset/deduction_guides
#include <unordered_set>
int main()
{
    std::unordered_multiset s = { 1, 2, 3, 4 }; // guide #2 deduces std::unordered_multiset<int>
    std::unordered_multiset s2(s.begin(), s.end()); // guide #1 deduces std::unordered_multiset<int>
}
