// cppreference link https://en.cppreference.com/w/cpp/container/map/rbegin
#include <iomanip>
#include <iostream>
#include <map>
#include <string_view>

int main()
{
    const std::map<int, std::string_view> coins {
        { 10, "dime" },
        { 100, "dollar" },
        { 50, "half dollar" },
        { 5, "nickel" },
        { 1, "penny" },
        { 25, "quarter" }
    }; // initializer entries in name alphabetical order
    std::cout << "US coins in circulation, largest to smallest denomination:\n";
    for (auto it = coins.crbegin(); it != coins.crend(); ++it) {
        std::cout << std::setw(11) << it->second << " = ¢" << it->first << '\n';
    }
}
