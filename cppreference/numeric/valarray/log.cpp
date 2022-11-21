// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/log
#include <iomanip>
#include <iostream>
#include <valarray>

void show(char const* title, const std::valarray<double>& va)
{
    std::cout << title << ":" << std::right << std::fixed;
    for (double x : va) {
        std::cout << std::setw(10) << x;
    }
    std::cout << '\n';
}

int main()
{
    const std::valarray<double> n { 0.0, 1.0, 2.0, 3.0 };
    const std::valarray<double> exp_n { std::exp(n) };
    const std::valarray<double> log_exp_n { std::log(exp_n) };

    show("n      ", n);
    show("eⁿ     ", exp_n);
    show("log(eⁿ)", log_exp_n);
}
