// cplusplus link https://cplusplus.com/reference/complex\complex\real
// complex::real example
#include <complex> // std::complex
#include <iostream> // std::cout

int main()
{
    std::complex<double> mycomplex(10.0, 1.0);

    std::cout << "Real part: " << mycomplex.real() << '\n';

    return 0;
}
