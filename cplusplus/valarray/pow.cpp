// cplusplus link https://cplusplus.com/reference/valarray\pow
// pow valarray example
#include <cmath> // std::pow
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::pow

int main()
{
    std::valarray<double> val(5);
    std::valarray<double> results;

    for (int i = 0; i < 5; ++i)
        val[i] = i + 1;
    std::cout << "val:";
    for (std::size_t i = 0; i < val.size(); ++i)
        std::cout << ' ' << val[i];
    std::cout << '\n';

    results = std::pow(val, val);
    std::cout << "val^val:";
    for (std::size_t i = 0; i < results.size(); ++i)
        std::cout << ' ' << results[i];
    std::cout << '\n';

    results = std::pow(val, 2.0);
    std::cout << "val^2:";
    for (std::size_t i = 0; i < results.size(); ++i)
        std::cout << ' ' << results[i];
    std::cout << '\n';

    results = std::pow(2.0, val);
    std::cout << "2^val:";
    for (std::size_t i = 0; i < results.size(); ++i)
        std::cout << ' ' << results[i];
    std::cout << '\n';

    return 0;
}
