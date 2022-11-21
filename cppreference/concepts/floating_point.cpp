// cppreference link https://en.cppreference.com/w/cpp/concepts/floating_point
#include <concepts>
#include <iostream>
#include <type_traits>

constexpr std::floating_point auto x2(std::floating_point auto x)
{
    return x + x;
}

constexpr std::integral auto x2(std::integral auto x)
{
    return x << 1;
}

int main()
{
    constexpr auto d = x2(1.1);
    static_assert(std::is_same_v<double const, decltype(d)>);
    std::cout << d << '\n';

    constexpr auto f = x2(2.2f);
    static_assert(std::is_same_v<float const, decltype(f)>);
    std::cout << f << '\n';

    constexpr auto i = x2(444);
    static_assert(std::is_same_v<int const, decltype(i)>);
    std::cout << i << '\n';
}
