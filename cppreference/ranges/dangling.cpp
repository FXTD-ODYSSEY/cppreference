// cppreference link https://en.cppreference.com/w/cpp/ranges/dangling
#include <algorithm>
#include <array>
#include <iostream>
#include <ranges>
#include <string_view>
#include <type_traits>

int main()
{
    auto get_array_by_value = [] { return std::array { 0, 1, 0, 1 }; };
    auto dangling_iter = std::ranges::max_element(get_array_by_value());
    static_assert(std::is_same_v<std::ranges::dangling, decltype(dangling_iter)>);
    //  std::cout << *dangling_iter << '\n'; // compilation error: no match for 'operator*'
    // (operand type is 'std::ranges::dangling')

    auto get_persistent_array = []() -> const std::array<int, 4>& {
        static constexpr std::array a { 0, 1, 0, 1 };
        return a;
    };
    auto valid_iter = std::ranges::max_element(get_persistent_array());
    static_assert(!std::is_same_v<std::ranges::dangling, decltype(valid_iter)>);
    std::cout << *valid_iter << ' '; // 1

    auto get_string_view = [] { return std::string_view { "alpha" }; };
    auto valid_iter2 = std::ranges::min_element(get_string_view());
    // OK: std::basic_string_view models borrowed_range
    static_assert(!std::is_same_v<std::ranges::dangling, decltype(valid_iter2)>);
    std::cout << '\'' << *valid_iter2 << '\'' << '\n'; // 'a'
}
