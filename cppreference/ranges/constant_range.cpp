// cppreference link https://en.cppreference.com/w/cpp/ranges/constant_range
#include <ranges>
#include <span>
#include <string_view>
#include <vector>

// mechanisms for ensuring the parameter is a constant range
// 1) an overload set where the mutable one defers to the constant one
template <std::ranges::constant_range R>
void takes_any_range1(R&& r)
{
    // R is definitely a constant range
}

template <std::ranges::range R>
void takes_any_range1(R&& r)
{
    takes_any_range1(std::views::as_const(std::forward<R>(r)));
}

// 2) one function template that shadows its parameter
template <std::ranges::range R>
void takes_any_range2(R&& _r)
{
    auto r = std::views::as_const(std::forward<R>(_r));

    // r is definitely a constant range
    // never use _r again
}

// 3) one function template that recursively invokes itself
template <std::ranges::range R>
void takes_any_range3(R&& r)
{
    if constexpr (std::ranges::constant_range<R>) {
        // R is definitely a constant range
        // put implementation here
    } else {
        takes_any_range3(std::views::as_const(std::forward<R>(r)));
    }
}

int main()
{
    static_assert(not std::ranges::constant_range<std::vector<int>>
        and std::ranges::constant_range<const std::vector<int>>
        and std::ranges::constant_range<std::string_view>
        and not std::ranges::constant_range<std::span<int>>
        and not std::ranges::constant_range<const std::span<int>>
        and std::ranges::constant_range<std::span<const int>>);
}
