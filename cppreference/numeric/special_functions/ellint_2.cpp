// cppreference link https://en.cppreference.com/w/cpp/numeric/special_functions/ellint_2
#include <cmath>
#include <iostream>
int main()
{
    double hpi = std::acos(-1) / 2;
    std::cout << "E(0,π/2) = " << std::ellint_2(0, hpi) << '\n'
              << "E(0,-π/2) = " << std::ellint_2(0, -hpi) << '\n'
              << "π/2 = " << hpi << '\n'
              << "E(0.7,0) = " << std::ellint_2(0.7, 0) << '\n'
              << "E(1,π/2) = " << std::ellint_2(1, hpi) << '\n';
}
