// cppreference link https://en.cppreference.com/w/cpp/ranges/single_view
#include <iomanip>
#include <iostream>
#include <ranges>
#include <string>
#include <tuple>

int main()
{
    constexpr std::ranges::single_view sv1 { 3.1415 }; // uses (const T&) constructor
    static_assert(sv1);
    static_assert(not sv1.empty());

    std::cout << "1) *sv1.data(): " << *sv1.data() << '\n'
              << "2) *sv1.begin(): " << *sv1.begin() << '\n'
              << "3)  sv1.size(): " << sv1.size() << '\n'
              << "4)  distance: " << std::distance(sv1.begin(), sv1.end()) << '\n';

    std::string str { "C++20" };
    std::cout << "5)  str = " << std::quoted(str) << '\n';
    std::ranges::single_view sv2 { std::move(str) }; // uses (T&&) constructor
    std::cout << "6) *sv2.data(): " << quoted(*sv2.data()) << '\n'
              << "7)  str = " << quoted(str) << '\n';

    std::ranges::single_view<std::tuple<int, double, std::string>>
        sv3 { std::in_place, 42, 3.14, "😄" }; // uses (std::in_place_t, Args&&... args)

    std::cout << "8)  sv3 holds a tuple: { "
              << std::get<0>(sv3[0]) << ", "
              << std::get<1>(sv3[0]) << ", "
              << std::get<2>(sv3[0]) << " }\n";
}
