// cplusplus link https://cplusplus.com/reference/complex\real
// std::real example
#include <complex> // std::complex, std::real
#include <iostream> // std::cout

int main()
{
    std::complex<double> mycomplex(10.0, 1.0);

    std::cout << "Real part: " << std::real(mycomplex) << '\n';

    return 0;
}
