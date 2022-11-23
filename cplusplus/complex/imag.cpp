// cplusplus link https://cplusplus.com/reference/complex\imag
// std::imag example
#include <complex> // std::complex, std::imag
#include <iostream> // std::cout

int main()
{
    std::complex<double> mycomplex(20.0, 2.0);

    std::cout << "Imaginary part: " << std::imag(mycomplex) << '\n';

    return 0;
}
