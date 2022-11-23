// cplusplus link https://cplusplus.com/reference/complex\proj
// proj example
#include <complex> // std::complex, std::proj
#include <iostream> // std::cout
#include <limits> // std::numeric_limits

int main()
{
    std::complex<double> mycomplex(std::numeric_limits<double>::infinity(), 2.0);

    std::cout << "The projection of " << mycomplex << " is " << std::proj(mycomplex) << '\n';

    return 0;
}
