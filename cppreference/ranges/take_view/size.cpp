// cppreference link https://en.cppreference.com/w/cpp/ranges/take_view/size
#include <iostream>
#include <ranges>

int main()
{
    constexpr int arr[] { 1, 2, 3 };

    for (int i = 0; i != 6; ++i) {
        const auto tv = std::ranges::take_view { arr, i };
        std::cout << tv.size() << ' ';
    }
}
