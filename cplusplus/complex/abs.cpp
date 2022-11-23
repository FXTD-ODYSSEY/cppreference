// cplusplus link https://cplusplus.com/reference/complex\abs
// abs complex example
#include <complex> // std::complex, std::abs
#include <iostream> // std::cout

int main()
{
    std::complex<double> mycomplex(3.0, 4.0);

    std::cout << "The absolute value of " << mycomplex << " is " << std::abs(mycomplex) << '\n';

    return 0;
}
