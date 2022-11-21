// cppreference link https://en.cppreference.com/w/cpp/ranges/subrange/tuple_element
#include <iterator>
#include <list>
#include <ranges>
#include <type_traits>

int main()
{
    std::list<int> list { 3, 1, 4, 1, 5, 9, 2, 6 };

    std::ranges::subrange subrange {
        std::counted_iterator { std::begin(list), 4 },
        std::default_sentinel
    };

    static_assert(
        std::is_same_v<
            std::tuple_element_t<0, decltype(subrange)>,
            // implementation-defined type:
            std::counted_iterator<std::_List_iterator<int>>>);

    static_assert(
        std::is_same_v<
            std::tuple_element_t<1, decltype(subrange)>,
            std::default_sentinel_t>);
}
