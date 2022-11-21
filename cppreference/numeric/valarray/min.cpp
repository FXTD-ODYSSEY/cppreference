// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/min
#include <iostream>
#include <valarray>

int main()
{
    std::valarray<double> a { 1, 2, 3, 4, 5, 6, 7, 8 };
    std::cout << "Minimum value: " << a.min() << "\n";
}
