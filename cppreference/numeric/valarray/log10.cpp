// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/log10
#include <cmath>
#include <iomanip>
#include <iostream>
#include <valarray>

void show(char const* title, const std::valarray<float>& va)
{
    std::cout << title << ": " << std::right;
    for (float x : va) {
        std::cout << std::setw(6) << x;
    }
    std::cout << '\n';
}

int main()
{
    const std::valarray<float> n { -2.f, -1.f, 0.f, 1.f, 2.f, 3.f, INFINITY };
    const std::valarray<float> pow10 { std::pow(10.f, n) };
    const std::valarray<float> log10_pow10 { std::log10(pow10) };

    show("n      ", n);
    show("10ⁿ    ", pow10);
    show("lg(10ⁿ)", log10_pow10);
}
