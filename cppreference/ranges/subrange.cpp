// cppreference link https://en.cppreference.com/w/cpp/ranges/subrange
#include <iostream>
#include <map>
#include <ranges>
#include <string_view>

template <class V>
void mutate(V& v) { v += 'A' - 'a'; }

template <class K, class V>
void mutate_map_values(std::multimap<K, V>& m, K k)
{
    auto [first, last] = m.equal_range(k);
    for (auto& [_, v] : std::ranges::subrange(first, last)) {
        mutate(v);
    }
}

int main()
{
    auto print = [](std::string_view rem, auto const& mm) {
        std::cout << rem << "{ ";
        for (const auto& [k, v] : mm)
            std::cout << "{" << k << ",'" << v << "'} ";
        std::cout << "}\n";
    };

    std::multimap<int, char> mm { { 4, 'a' }, { 3, '-' }, { 4, 'b' }, { 5, '-' }, { 4, 'c' } };
    print("Before: ", mm);
    mutate_map_values(mm, 4);
    print("After:  ", mm);
}
