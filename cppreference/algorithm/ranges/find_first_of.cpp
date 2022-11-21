// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/find_first_of
#include <algorithm>
#include <iostream>
#include <iterator>

int main()
{
    namespace rng = std::ranges;

    constexpr static auto haystack = { 1, 2, 3, 4 };
    constexpr static auto needles = { 0, 3, 4, 3 };

    constexpr auto found1 = rng::find_first_of(haystack.begin(), haystack.end(),
        needles.begin(), needles.end());
    static_assert(std::distance(haystack.begin(), found1) == 2);

    constexpr auto found2 = rng::find_first_of(haystack, needles);
    static_assert(std::distance(haystack.begin(), found2) == 2);

    constexpr static auto negatives = { -6, -3, -4, -3 };
    constexpr auto not_found = rng::find_first_of(haystack, negatives);
    static_assert(not_found == haystack.end());

    constexpr auto found3 = rng::find_first_of(haystack, negatives,
        [](int x, int y) { return x == -y; }); // uses a binary comparator
    static_assert(std::distance(haystack.begin(), found3) == 2);

    struct P {
        int x, y;
    };
    constexpr static auto p1 = { P { 1, -1 }, P { 2, -2 }, P { 3, -3 }, P { 4, -4 } };
    constexpr static auto p2 = { P { 5, -5 }, P { 6, -3 }, P { 7, -5 }, P { 8, -3 } };

    // Compare only P::y data members by projecting them:
    const auto found4 = rng::find_first_of(p1, p2, {}, &P::y, &P::y);
    std::cout << "First equivalent element {" << found4->x << ", " << found4->y
              << "} was found at position " << std::distance(p1.begin(), found4)
              << ".\n";
}
