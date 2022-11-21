// cppreference link https://en.cppreference.com/w/cpp/ranges/zip_view/sentinel/operator-
#include <cassert>
#include <deque>
#include <list>
#include <ranges>
#include <vector>

int main()
{
    auto x = std::vector { 1, 2, 3, 4 };
    auto y = std::deque { 'a', 'b', 'c' };
    auto z = { 1.1, 2.2 };
    auto w = std::list { 1, 2, 3 };

    auto p = std::views::zip(x, y, z);
    assert(p.begin() - p.end() == +2);
    assert(p.end() - p.begin() == -2);

    [[maybe_unused]] auto q = std::views::zip(x, y, w);

    // The following code fires a compile-time error because std::list::iterator
    // does not support operator- that is needed to calculate the distance:
    // auto e = q.begin() - q.end();
}
