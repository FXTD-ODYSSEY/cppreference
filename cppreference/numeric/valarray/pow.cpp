// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/pow
#include <cmath>
#include <cstddef>
#include <iomanip>
#include <iostream>
#include <valarray>

void render(std::valarray<int> const& bases,
    std::valarray<int> const& exponents = {},
    std::valarray<int> const& results = {})
{
    constexpr char const* sup[] {
        "\u2070",
        "\u00B9",
        "\u00B2",
        "\u00B3",
        "\u2074",
        "\u2075",
        "\u2076",
        "\u2077",
        "\u2078",
        "\u2079",
    };

    for (std::size_t n = 0; n != bases.size(); ++n) {
        std::cout << std::left << bases[n] << std::left;
        if (n < exponents.size())
            std::cout << sup[exponents[n] % 10] << " ";
        else
            std::cout << "  ";
    }
    if (results.size() != 0) {
        std::cout << "=";
        for (std::size_t n = 0; n != results.size(); ++n) {
            std::cout << " " << results[n];
        }
    }
    std::cout << '\n';
}

void render(int n) { std::cout << n << '\n'; }

int main()
{
    constexpr int base { 2 };
    constexpr int exponent { 5 };
    const std::valarray<int> bases { 1, 2, 3, 4, 5, 6, 7 };
    const std::valarray<int> exponents { 0, 1, 2, 3, 4, 5, 6 };

    std::cout << "(1) pow( const std::valarray<T>& base, const std::valarray<T>& exp ); \n";
    const std::valarray<int> powers1 = std::pow(bases, exponents);
    std::cout << "base : ";
    render(bases);
    std::cout << "exp  : ";
    render(exponents);
    std::cout << "pow  : ";
    render(bases, exponents, powers1);

    std::cout << "\n(2) pow( const std::valarray<T>& base, const value_type& vexp ); \n";
    const std::valarray<int> powers2 = std::pow(bases, exponent);
    std::cout << "base : ";
    render(bases);
    std::cout << "vexp : ";
    render(exponent);
    std::cout << "pow  : ";
    render(bases, std::valarray<int>(exponent, bases.size()), powers2);

    std::cout << "\n(3) pow( const value_type& vbase, const std::valarray<T>& exp ); \n";
    const std::valarray<int> powers3 = std::pow(base, exponents);
    std::cout << "vbase: ";
    render(base);
    std::cout << "exp  : ";
    render(exponents);
    std::cout << "pow  : ";
    render(std::valarray<int>(base, bases.size()), exponents, powers3);
}
