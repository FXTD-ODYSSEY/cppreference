// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator/operator-2
#include <initializer_list>
#include <iterator>

int main()
{
    constexpr static auto v = { 1, 2, 3, 4 };
    constexpr std::counted_iterator<std::initializer_list<int>::iterator>
        it { v.begin(), 3 };
    constexpr auto d1 = it - std::default_sentinel;
    static_assert(d1 == -3); // (1)
    constexpr auto d2 = std::default_sentinel - it;
    static_assert(d2 == +3); // (2)
}
