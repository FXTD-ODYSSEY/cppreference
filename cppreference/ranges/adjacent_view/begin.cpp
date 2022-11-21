// cppreference link https://en.cppreference.com/w/cpp/ranges/adjacent_view/begin
#include <ranges>
#include <tuple>
#include <type_traits>

int main()
{
    constexpr static auto v = { 'A', 'B', 'C', 'D', 'E' };

    constexpr auto view = std::views::adjacent<3>(v);

    constexpr auto tuple = *view.begin();

    static_assert(
        std::is_same_v<
            decltype(tuple),
            const std::tuple<char const&, char const&, char const&>>);

    static_assert(
        std::get<0>(tuple) == 'A' and std::get<1>(tuple) == 'B' and std::get<2>(tuple) == 'C');
}
