// cppreference link https://en.cppreference.com/w/cpp/iterator/random_access_iterator
#include <iterator>

namespace cxx20 {
template <std::input_or_output_iterator Iter>
constexpr std::iter_difference_t<Iter> distance(Iter first, Iter last)
{
    if constexpr (std::random_access_iterator<Iter>)
        return last - first;
    else {
        std::iter_difference_t<Iter> result {};
        for (; first != last; ++first)
            ++result;
        return result;
    }
}
}

int main()
{
    static constexpr auto il = { 3, 1, 4 };
    static_assert(cxx20::distance(il.begin(), il.end()) == 3);
    static_assert(cxx20::distance(il.end(), il.begin()) == -3);
}
