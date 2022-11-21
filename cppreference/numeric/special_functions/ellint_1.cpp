// cppreference link https://en.cppreference.com/w/cpp/numeric/special_functions/ellint_1
#include <cmath>
#include <iostream>
int main()
{
    double hpi = std::acos(-1) / 2;
    std::cout << "F(0,π/2) = " << std::ellint_1(0, hpi) << '\n'
              << "F(0,-π/2) = " << std::ellint_1(0, -hpi) << '\n'
              << "π/2 = " << hpi << '\n'
              << "F(0.7,0) = " << std::ellint_1(0.7, 0) << '\n';
}
