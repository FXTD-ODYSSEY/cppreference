// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/generate_n
#include <algorithm>
#include <array>
#include <iostream>
#include <random>
#include <string_view>

auto dice()
{
    static std::uniform_int_distribution<int> distr { 1, 6 };
    static std::random_device engine;
    static std::mt19937 noise { engine() };
    return distr(noise);
}

void print(const auto& v, std::string_view comment)
{
    for (int i : v) {
        std::cout << i << ' ';
    }
    std::cout << "(" << comment << ")\n";
}

int main()
{
    std::array<int, 8> v;

    std::ranges::generate_n(v.begin(), v.size(), dice);
    print(v, "dice");

    std::ranges::generate_n(v.begin(), v.size(), [n { 0 }]() mutable { return n++; });
    // same effect as std::iota(v.begin(), v.end(), 0);
    print(v, "iota");
}
