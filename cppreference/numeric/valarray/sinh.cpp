// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/sinh
#include <cmath>
#include <complex>
#include <iomanip>
#include <iostream>
#include <valarray>

template <typename T>
void show(char const* title, const std::valarray<T>& va)
{
    std::cout << title << ": " << std::right;
    for (T x : va) {
        std::cout << std::fixed << x << " ";
    }
    std::cout << '\n';
}

template <typename T>
void sinh_for(std::valarray<T> const& z)
{
    // Hyperbolic sine is sinh(z) = (eᶻ - e⁻ᶻ) / 2.

    const std::valarray<T> sinh_z { std::sinh(z) };
    const std::valarray<T> e_z { std::exp(z) };
    const std::valarray<T> e_neg_z { std::exp(-z) };
    const std::valarray<T> sinh_def { (e_z - e_neg_z) / 2.0f };

    show("n         ", z);
    show("sinh(n)   ", sinh_z);
    show("(eⁿ-e⁻ⁿ)/2", sinh_def);

    std::cout.put('\n');
}

int main()
{
    sinh_for(std::valarray<float> { -.2f, -.1f, 0.f, .1f, .2f, INFINITY });
    sinh_for(std::valarray<std::complex<double>> { { -.2, -.1 }, { .2, .1 } });
}
