// cplusplus link https://cplusplus.com/reference/valarray\log
// log valarray example
#include <cmath> // std::log(double)
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::log(valarray)

int main()
{
    double val[] = { 5.0, 6.6, 8.0, 9.9 };
    std::valarray<double> foo(val, 4);

    std::valarray<double> bar = log(foo);

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
