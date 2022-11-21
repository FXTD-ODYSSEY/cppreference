// cppreference link https://en.cppreference.com/w/cpp/utility/tuple_size
#include <array>
#include <cstddef>
#include <ranges>
#include <tuple>
#include <utility>

template <class T, std::size_t Size>
struct Arr {
    T data[Size];
};
// a program-defined specialization of std::tuple_size:
template <class T, std::size_t Size>
struct std::tuple_size<Arr<T, Size>>
    : public integral_constant<std::size_t, Size> { };

int main()
{
    using tuple1 = std::tuple<int, char, double>;
    static_assert(3 == std::tuple_size_v<tuple1>); // uses using template (C++17)

    using array3x4 = std::array<std::array<int, 3>, 4>;
    static_assert(4 == std::tuple_size<array3x4> {}); // uses operator std::size_t

    using pair = std::pair<tuple1, array3x4>;
    static_assert(2 == std::tuple_size<pair>()); // uses operator()

    using sub = std::ranges::subrange<char*, char*>;
    static_assert(2 == std::tuple_size<sub>::value);

    using Arr5 = Arr<int, 5>;
    static_assert(5 == std::tuple_size_v<Arr5>);
}
