// cppreference link https://en.cppreference.com/w/cpp/utility/tuple_element
#include <array>
#include <cstddef>
#include <iostream>
#include <ranges>
#include <tuple>
#include <type_traits>
#include <utility>

template <typename T1, typename T2, typename T3>
struct Triple {
    T1 t1;
    T2 t2;
    T3 t3;
};

// A specialization of std::tuple_element for program-defined type Triple:
template <std::size_t I, typename T1, typename T2, typename T3>
struct std::tuple_element<I, Triple<T1, T2, T3>> {
    static_assert(I < 4);
};
template <typename T1, typename T2, typename T3>
struct std::tuple_element<0, Triple<T1, T2, T3>> {
    using type = T1;
};
template <typename T1, typename T2, typename T3>
struct std::tuple_element<1, Triple<T1, T2, T3>> {
    using type = T2;
};
template <typename T1, typename T2, typename T3>
struct std::tuple_element<2, Triple<T1, T2, T3>> {
    using type = T3;
};

template <typename... Args>
struct TripleTypes {
    static_assert(3 == sizeof...(Args), "Expected exactly 3 type names!");
    template <std::size_t N>
    using type = typename std::tuple_element_t<N, Triple<Args...>>;
};

int main()
{
    TripleTypes<char, int, float>::type<1> i { 42 };
    std::cout << i << '\n';

    using Tri = Triple<int, char, short>; //< Program-defined type
    static_assert(std::is_same_v<std::tuple_element_t<0, Tri>, int> && std::is_same_v<std::tuple_element_t<1, Tri>, char> && std::is_same_v<std::tuple_element_t<2, Tri>, short>);

    using Tuple = std::tuple<int, char, short>;
    static_assert(std::is_same_v<std::tuple_element_t<0, Tuple>, int> && std::is_same_v<std::tuple_element_t<1, Tuple>, char> && std::is_same_v<std::tuple_element_t<2, Tuple>, short>);

    using Array3 = std::array<int, 3>;
    static_assert(std::is_same_v<std::tuple_element_t<0, Array3>, int> && std::is_same_v<std::tuple_element_t<1, Array3>, int> && std::is_same_v<std::tuple_element_t<2, Array3>, int>);

    using Pair = std::pair<Tuple, Tri>;
    static_assert(std::is_same_v<std::tuple_element_t<0, Pair>, Tuple> && std::is_same_v<std::tuple_element_t<1, Pair>, Tri>);

    using Sub = std::ranges::subrange<int*, int*>;
    static_assert(std::is_same_v<std::tuple_element_t<0, Sub>, int*> && std::is_same_v<std::tuple_element_t<1, Sub>, int*>);
}
