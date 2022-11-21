// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/tan
#include <cmath>
#include <iostream>
#include <valarray>

auto show = [](char const* title, const std::valarray<double>& va) {
    std::cout << title << ":";
    for (auto x : va)
        std::cout << "  " << std::fixed << x;
    std::cout << '\n';
};

int main()
{
    const std::valarray<double> x = { .0, .1, .2, .3 };
    const std::valarray<double> y = std::tan(x);
    const std::valarray<double> z = std::atan(y);

    show("x          ", x);
    show("y = tan(x) ", y);
    show("z = atan(y)", z);
}
