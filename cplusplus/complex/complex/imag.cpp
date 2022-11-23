// cplusplus link https://cplusplus.com/reference/complex\complex\imag
// complex::imag example
#include <complex> // std::complex
#include <iostream> // std::cout

int main()
{
    std::complex<double> mycomplex(20.0, 2.0);

    std::cout << "Imaginary part: " << mycomplex.imag() << '\n';

    return 0;
}
