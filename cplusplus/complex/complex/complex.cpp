// cplusplus link https://cplusplus.com/reference/complex\complex\complex
// complex constructor example
#include <complex> // std::complex
#include <iostream> // std::cout

int main()
{
    std::complex<double> first(2.0, 2.0);
    std::complex<double> second(first);
    std::complex<long double> third(second);

    std::cout << third << '\n';

    return 0;
}
