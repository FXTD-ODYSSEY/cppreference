// cplusplus link https://cplusplus.com/reference/complex\norm
// norm example
#include <complex> // std::complex, std::norm
#include <iostream> // std::cout

int main()
{
    std::complex<double> mycomplex(3.0, 4.0);

    std::cout << "The norm of " << mycomplex << " is " << std::norm(mycomplex) << '\n';

    return 0;
}
