// cppreference link https://en.cppreference.com/w/cpp/ranges/common_view/end
#include <iostream>
#include <numeric>
#include <ranges>

int main()
{
    constexpr int n { 4 };

    constexpr auto cv1 = std::views::iota(1)
        | std::views::take(n)
        | std::views::common;
    constexpr auto cv2 = std::views::iota(2)
        | std::views::take(n);
    const int product = std::inner_product(cv1.begin(), cv1.end(),
        cv2.begin(),
        0);
    std::cout << product << '\n';
}
