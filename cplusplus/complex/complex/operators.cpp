// cplusplus link https://cplusplus.com/reference/complex\complex\operators
// complex operators
#include <complex> // std::complex
#include <iostream> // std::cout

int main()
{
    std::complex<double> mycomplex;

    mycomplex = 10.0; // 10
    mycomplex += 2.0; // 12

    mycomplex = std::complex<double>(10.0, 1.0); // 10+i

    mycomplex = mycomplex + 10.0; // 20+i

    if (mycomplex == std::complex<double>(20.0, 1.0))
        std::cout << "mycomplex is " << mycomplex << '\n';

    return 0;
}
