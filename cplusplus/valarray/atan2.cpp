// cplusplus link https://cplusplus.com/reference/valarray\atan2
// atan2 valarray example
#include <cmath> // std::atan2
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::atan2

int main()
{
    double y[] = { 0.0, 3.0, -2.0 };
    double x[] = { -3.0, 3.0, -1.0 };
    std::valarray<double> ycoords(y, 3);
    std::valarray<double> xcoords(x, 3);

    std::valarray<double> results = atan2(ycoords, xcoords);

    std::cout << "results:";
    for (std::size_t i = 0; i < results.size(); ++i)
        std::cout << ' ' << results[i];
    std::cout << '\n';

    return 0;
}
