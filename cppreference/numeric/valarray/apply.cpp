// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/apply
#include <cmath>
#include <iostream>
#include <valarray>

int main()
{
    std::valarray<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    v = v.apply([](int n) -> int {
        return std::round(std::tgamma(n + 1));
    });
    for (auto n : v) {
        std::cout << n << ' ';
    }
    std::cout << '\n';
}
