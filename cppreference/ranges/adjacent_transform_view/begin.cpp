// cppreference link https://en.cppreference.com/w/cpp/ranges/adjacent_transform_view/begin
#include <ranges>

int main()
{
    auto sum = [](auto... args) { return (... + args); };

    constexpr auto view = std::views::iota(13, 1337)
        | std::views::adjacent_transform<3>(sum);

    static_assert(*view.begin() == 42 and 42 == 13 + 14 + 15);
}
