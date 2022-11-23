// cplusplus link https://cplusplus.com/reference/valarray\exp
// exp valarray example
#include <cmath> // std::exp(double)
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::exp(valarray)

int main()
{
    double val[] = { 1.1, 2.2, 4.4, 8.8 };
    std::valarray<double> foo(val, 4);

    std::valarray<double> bar = exp(foo);

    std::cout << "foo:";
    for (std::size_t i = 0; i < foo.size(); ++i)
        std::cout << ' ' << foo[i];
    std::cout << '\n';

    std::cout << "bar:";
    for (std::size_t i = 0; i < bar.size(); ++i)
        std::cout << ' ' << bar[i];
    std::cout << '\n';

    return 0;
}
