// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/cos
#include <cmath>
#include <iomanip>
#include <iostream>
#include <valarray>

void show(const char* title, const std::valarray<float>& data)
{
    const int w { 9 };
    std::cout << std::setw(w) << title << " | ";
    for (float x : data)
        std::cout << std::setw(w) << x << " | ";
    std::cout << '\n';
}

int main()
{
    const std::valarray<float> x { .1, .2, .3, .4 };
    const auto sin = std::sin(x);
    const auto cos = std::cos(x);
    const auto z = (sin * sin) + (cos * cos);

    show("x", x);
    show("sin(x)", sin);
    show("cos(x)", cos);
    show("z", z);
}
