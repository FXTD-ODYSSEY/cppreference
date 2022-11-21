// cppreference link https://en.cppreference.com/w/cpp/container/multimap/deduction_guides
#include <map>
int main()
{
    // std::multimap m1 = {{"foo", 1}, {"bar", 2}}; // Error: braced-init-list has no type;
    // cannot deduce pair<Key, T> from
    // {"foo", 1} or {"bar", 2}

    std::multimap m1 = { std::pair { "foo", 2 }, { "bar", 3 } }; // guide #2
    std::multimap m2(m1.begin(), m1.end()); // guide #1
}
