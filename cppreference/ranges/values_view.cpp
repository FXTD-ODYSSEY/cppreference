// cppreference link https://en.cppreference.com/w/cpp/ranges/values_view
#include <iostream>
#include <map>
#include <ranges>

int main()
{
    const auto list = { std::pair { 1, 11.1 }, { 2, 22.2 }, { 3, 33.3 } };
    std::cout << "pair::second values in the list: ";
    for (double value : list | std::views::values)
        std::cout << value << ' ';

    std::map<char, int> map { { 'A', 1 }, { 'B', 2 }, { 'C', 3 }, { 'D', 4 }, { 'E', 5 } };
    auto odd = [](int x) { return 0 != (x & 1); };
    std::cout << "\nodd values in the map: ";
    for (int value : map | std::views::values | std::views::filter(odd))
        std::cout << value << ' ';
}
