// cplusplus link https://cplusplus.com/reference/valarray\log10
// log10 valarray example
#include <cmath> // std::log10(double)
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::log10(valarray)

int main()
{
    double val[] = { 1.0, 10.0, 100.0, 200.0 };
    std::valarray<double> foo(val, 4);

    std::valarray<double> bar = log10(foo);

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
