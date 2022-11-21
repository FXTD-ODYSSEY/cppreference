// cppreference link https://en.cppreference.com/w/cpp/io/ios_base/precision
#include <iostream>
int main()
{
    const double d = 1.2345678901234;
    std::cout << "The  default precision is " << std::cout.precision() << "\n\n";
    std::cout << "With default precision d is " << d << '\n';
    std::cout.precision(12);
    std::cout << "With high    precision d is " << d << '\n';
}
