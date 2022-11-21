// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/tanh
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
    const std::valarray<double> sinh = std::sinh(x);
    const std::valarray<double> cosh = std::cosh(x);
    const std::valarray<double> tanh = std::tanh(x);
    const std::valarray<double> tanh_by_def = sinh / cosh;
    const std::valarray<double> tanh_2x = std::tanh(2.0 * x);
    const std::valarray<double> tanh_2x_by_def = (2.0 * tanh) / (1.0 + std::pow(tanh, 2.0));

    show("x              ", x);
    show("tanh(x)        ", tanh);
    show("tanh(x) (def)  ", tanh_by_def);
    show("tanh(2*x)      ", tanh_2x);
    show("tanh(2*x) (def)", tanh_2x_by_def);
}
