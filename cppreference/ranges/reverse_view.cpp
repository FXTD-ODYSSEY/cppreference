// cppreference link https://en.cppreference.com/w/cpp/ranges/reverse_view
#include <iostream>
#include <ranges>

int main()
{
    static constexpr auto il = { 3, 1, 4, 1, 5, 9 };

    std::ranges::reverse_view rv { il };
    for (int i : rv)
        std::cout << i << ' ';
    std::cout << '\n';

    for (int i : il | std::views::reverse)
        std::cout << i << ' ';
    std::cout << '\n';

    // operator[] is inherited from `view_interface`
    for (auto i { 0U }; i != rv.size(); ++i)
        std::cout << rv[i] << ' ';
    std::cout << '\n';
}
