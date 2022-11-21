// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/generate
#include <algorithm>
#include <array>
#include <iostream>
#include <random>
#include <string_view>

auto dice()
{
    static std::uniform_int_distribution<int> distr { 1, 6 };
    static std::random_device device;
    static std::mt19937 engine { device() };
    return distr(engine);
}

void iota(auto& v, int n)
{
    std::ranges::generate(v, [&n]() mutable { return n++; });
}

void print(std::string_view comment, const auto& v)
{
    for (std::cout << comment; int i : v) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::array<int, 8> v;

    std::ranges::generate(v.begin(), v.end(), dice);
    print("dice: ", v);
    std::ranges::generate(v, dice);
    print("dice: ", v);

    iota(v, 1);
    print("iota: ", v);
}
