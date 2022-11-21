// cppreference link https://en.cppreference.com/w/cpp/container/unordered_multimap/deduction_guides
#include <unordered_map>
int main()
{
    // std::unordered_multimap m1 = {{"foo", 1}, {"bar", 2}}; // Error: braced-init-list has no type
    // cannot deduce pair<Key, T> from
    // {"foo", 1} or {"bar", 2}
    std::unordered_multimap m1 = { std::pair { "foo", 2 }, { "bar", 3 } }; // guide #2
    std::unordered_multimap m2(m1.begin(), m1.end()); // guide #1
}
