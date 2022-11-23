// cplusplus link https://cplusplus.com/reference/valarray\sin
// sin valarray example
#include <cmath> // std::sin(double)
#include <cstddef> // std::size_t
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::sin(valarray)

int main()
{
    double val[] = { 1.2, 3.14, 5.0 };
    std::valarray<double> foo(val, 3);

    std::valarray<double> bar = sin(foo);

    std::cout << "foo:";
    for (std::size_t i = 0; i < foo.size(); ++i)
        std::cout << ' ' << foo[i];
    std::cout << '\n';

    std::cout << "bar: ";
    for (std::size_t i = 0; i < bar.size(); ++i)
        std::cout << ' ' << bar[i];
    std::cout << '\n';

    return 0;
}
