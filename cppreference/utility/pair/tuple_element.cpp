// cppreference link https://en.cppreference.com/w/cpp/utility/pair/tuple_element
#include <iostream>
#include <string>
#include <tuple>

namespace detail {

template <std::size_t>
struct index_tag {
    explicit constexpr index_tag() = default;
};

template <class T, class U>
constexpr T get_val_dispatch(std::pair<T, U> const& pair, index_tag<0>)
{
    return pair.first;
}

template <class T, class U>
constexpr U get_val_dispatch(std::pair<T, U> const& pair, index_tag<1>)
{
    return pair.second;
}

} // namespace detail

template <std::size_t N, class T, class U>
auto constexpr get_val(std::pair<T, U> const& pair)
    -> typename std::tuple_element<N, std::pair<T, U>>::type
{
    return detail::get_val_dispatch(pair, detail::index_tag<N> {});
}

int main()
{
    auto var = std::make_pair(1, std::string { "one" });

    std::cout << get_val<0>(var) << " = " << get_val<1>(var);
}
