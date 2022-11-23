// cplusplus link https://cplusplus.com/reference/complex\conj
// conj example
#include <complex> // std::complex, std::conj
#include <iostream> // std::cout

int main()
{
    std::complex<double> mycomplex(10.0, 2.0);

    std::cout << "The conjugate of " << mycomplex << " is " << std::conj(mycomplex) << '\n';

    return 0;
}
