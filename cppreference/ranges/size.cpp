// cppreference link https://en.cppreference.com/w/cpp/ranges/size
#include <iostream>
#include <ranges>
#include <type_traits>
#include <vector>

int main()
{
    auto v = std::vector<int> {};
    std::cout << "ranges::size(v) == " << std::ranges::size(v) << '\n';

    auto il = { 7 };
    std::cout << "ranges::size(il) == " << std::ranges::size(il) << '\n';

    int array[] = { 4, 5 }; // array has a known bound
    std::cout << "ranges::size(array) == " << std::ranges::size(array) << '\n';

    std::cout << std::boolalpha << "is_signed: "
              << std::is_signed_v<decltype(std::ranges::size(v))> << '\n';
}
