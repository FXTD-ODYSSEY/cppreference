// cppreference link https://en.cppreference.com/w/cpp/ranges/adjacent_view/iterator/operator_arith
#include <cassert>
#include <list>
#include <ranges>
#include <utility>
#include <vector>

[[nodiscard]] bool operator==(std::pair<int&, int&> x, std::pair<int, int> y)
{
    return x.first == y.first and x.second == y.second;
}

int main()
{
    {
        auto v = std::vector { 0, 1, 2, 3, 4, 5 };
        auto i = (v | std::views::pairwise).begin();
        assert((*i == std::pair { 0, 1 }));
        ++i; // overload (1)
        assert((*i == std::pair { 1, 2 }));
        --i; // overload (3)
        assert((*i == std::pair { 0, 1 }));
        i += 2; // overload (5)
        assert((*i == std::pair { 2, 3 }));
        i -= 2; // overload (6)
        assert((*i == std::pair { 0, 1 }));
    }
    {
        auto v = std::list { 0, 1, 2, 3, 4, 5 };
        auto i = (v | std::views::pairwise).begin();
        assert((*i == std::pair { 0, 1 }));
        ++i; // overload (1)
        assert((*i == std::pair { 1, 2 }));
        --i; // overload (3)
        assert((*i == std::pair { 0, 1 }));
        //      i += 2; // Error: v is not a random_access_range; overload (5)
        //      i -= 2; // Error: v is not a random_access_range; overload (6)
    }
}
