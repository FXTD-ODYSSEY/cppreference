// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/sqrt
#include <cstddef>
#include <iostream>
#include <valarray>

int main()
{
    std::valarray<double> a(1, 8);
    std::valarray<double> b { 1, 2, 3, 4, 5, 6, 7, 8 };
    std::valarray<double> c = -b;
    // literals must also be of type T until LWG3074 (double in this case)
    std::valarray<double> d = std::sqrt(b * b - 4.0 * a * c);
    std::valarray<double> x1 = (-b - d) / (2.0 * a);
    std::valarray<double> x2 = (-b + d) / (2.0 * a);
    std::cout << "quadratic equation:  root 1:    root 2:\n";
    for (std::size_t i = 0; i < a.size(); ++i) {
        std::cout << a[i] << "\u00B7x\u00B2 + " << b[i] << "\u00B7x + "
                  << c[i] << " = 0  " << std::fixed << x1[i] << "  "
                  << x2[i] << std::defaultfloat << '\n';
    }
}
