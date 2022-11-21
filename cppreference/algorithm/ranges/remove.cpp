// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/remove
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string v1 { "No - Diagnostic - Required" };
    std::cout << std::quoted(v1) << " (v1, size: " << v1.size() << ")\n";
    const auto ret = std::ranges::remove(v1, ' ');
    std::cout << std::quoted(v1) << " (v1 after `remove`, size: " << v1.size() << ")\n";
    std::cout << ' ' << std::string(std::distance(v1.begin(), ret.begin()), '^') << '\n';
    v1.erase(ret.begin(), ret.end());
    std::cout << std::quoted(v1) << " (v1 after `erase`, size: " << v1.size() << ")\n\n";

    // remove_if with custom unary predicate:
    auto rm = [](char c) { return !std::isupper(c); };
    std::string v2 { "Substitution Failure Is Not An Error" };
    std::cout << std::quoted(v2) << " (v2, size: " << v2.size() << ")\n";
    const auto [first, last] = std::ranges::remove_if(v2, rm);
    std::cout << std::quoted(v2) << " (v2 after `remove_if`, size: " << v2.size() << ")\n";
    std::cout << ' ' << std::string(std::distance(v2.begin(), first), '^') << '\n';
    v2.erase(first, last);
    std::cout << std::quoted(v2) << " (v2 after `erase`, size: " << v2.size() << ")\n\n";

    // creating a view into a container that is modified by `remove_if`:
    for (std::string s : { "Small Object Optimization", "Non-Type Template Parameter" }) {
        std::cout << quoted(s) << " => "
                  << std::string_view { begin(s), std::ranges::remove_if(s, rm).begin() } << '\n';
    }
}
