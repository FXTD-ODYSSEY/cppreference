// cppreference link https://en.cppreference.com/w/cpp/types/numeric_limits/round_style
#include <iostream>
#include <limits>
int main()
{
    std::cout << std::hexfloat << "The decimal 0.1 is stored in a double as "
              << 0.1 << '\n'
              << "The decimal 0.3 is stored in a double as "
              << 0.3 << '\n'
              << "The rounding style is " << std::numeric_limits<double>::round_style << '\n';
}
