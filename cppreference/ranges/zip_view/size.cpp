// cppreference link https://en.cppreference.com/w/cpp/ranges/zip_view/size
#include <algorithm>
#include <cassert>
#include <deque>
#include <forward_list>
#include <ranges>
#include <vector>

int main()
{
    auto x = std::vector { 1, 2, 3, 4, 5 };
    auto y = std::deque { 'a', 'b', 'c' };
    auto z = std::forward_list { 1., 2. };

    auto v1 = std::views::zip(x, y);
    assert(v1.size() == std::min(x.size(), y.size()));
    assert(v1.size() == 3);

    [[maybe_unused]] auto v2 = std::views::zip(x, z);
    //  auto sz = v2.size(); // Error, v2 does not have size():
    static_assert(not std::ranges::sized_range<decltype(z)>);
}
