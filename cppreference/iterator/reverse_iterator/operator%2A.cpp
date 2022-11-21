// cppreference link https://en.cppreference.com/w/cpp/iterator/reverse_iterator/operator*
#include <complex>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    using RI0 = std::reverse_iterator<int*>;
    int a[] { 0, 1, 2, 3 };
    RI0 r0 { std::rbegin(a) };
    std::cout << "*r0 = " << *r0 << '\n';
    *r0 = 42;
    std::cout << "a[3] = " << a[3] << '\n';

    using RI1 = std::reverse_iterator<std::vector<int>::iterator>;
    std::vector<int> vi { 0, 1, 2, 3 };
    RI1 r1 { vi.rend() - 2 };
    std::cout << "*r1 = " << *r1 << '\n';

    using RI2 = std::reverse_iterator<std::vector<std::complex<double>>::iterator>;
    std::vector<std::complex<double>> vc { { 1, 2 }, { 3, 4 }, { 5, 6 }, { 7, 8 } };
    RI2 r2 { vc.rbegin() + 1 };
    std::cout << "vc[2] = "
              << "(" << r2->real() << "," << r2->imag() << ")\n";
}
