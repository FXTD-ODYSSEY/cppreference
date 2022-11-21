// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/cosh
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
    const auto sinh = std::sinh(x);
    const auto cosh = std::cosh(x);
    const auto z = (cosh * cosh) - (sinh * sinh);

    show("x", x);
    show("sinh(x)", sinh);
    show("cosh(x)", cosh);
    show("z", z);
}
