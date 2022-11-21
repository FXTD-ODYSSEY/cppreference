// cppreference link https://en.cppreference.com/w/cpp/numeric/special_functions/beta
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
double binom(int n, int k) { return 1 / ((n + 1) * std::beta(n - k + 1, k + 1)); }
int main()
{
    std::cout << "Pascal's triangle:\n";
    for (int n = 1; n < 10; ++n) {
        std::cout << std::string(20 - n * 2, ' ');
        for (int k = 1; k < n; ++k)
            std::cout << std::setw(3) << binom(n, k) << ' ';
        std::cout << '\n';
    }
}
