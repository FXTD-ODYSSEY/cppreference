// cppreference link https://en.cppreference.com/w/cpp/ranges/random_access_range
#include <array>
#include <deque>
#include <list>
#include <ranges>
#include <set>
#include <valarray>
#include <vector>

template <typename T>
concept RAR = std::ranges::random_access_range<T>;

int main()
{
    int a[4];
    static_assert(
        RAR<std::vector<int>> and RAR<std::vector<bool>> and RAR<std::deque<int>> and RAR<std::valarray<int>> and RAR<decltype(a)> and not RAR<std::list<int>> and not RAR<std::set<int>> and RAR<std::array<std::list<int>, 42>>);
}
