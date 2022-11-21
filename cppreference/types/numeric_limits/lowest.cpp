// cppreference link https://en.cppreference.com/w/cpp/types/numeric_limits/lowest
#include <iostream>
#include <limits>
int main()
{

    std::cout << "std::numeric_limits<T>::min():\n"
              << "\tfloat: " << std::numeric_limits<float>::min()
              << " or " << std::hexfloat << std::numeric_limits<float>::min() << '\n'
              << "\tdouble: " << std::defaultfloat << std::numeric_limits<double>::min()
              << " or " << std::hexfloat << std::numeric_limits<double>::min() << '\n';
    std::cout << "std::numeric_limits<T>::lowest():\n"
              << "\tfloat: " << std::defaultfloat << std::numeric_limits<float>::lowest()
              << " or " << std::hexfloat << std::numeric_limits<float>::lowest() << '\n'
              << "\tdouble: " << std::defaultfloat << std::numeric_limits<double>::lowest()
              << " or " << std::hexfloat << std::numeric_limits<double>::lowest() << '\n';
    std::cout << "std::numeric_limits<T>::max():\n"
              << "\tfloat: " << std::defaultfloat << std::numeric_limits<float>::max()
              << " or " << std::hexfloat << std::numeric_limits<float>::max() << '\n'
              << "\tdouble: " << std::defaultfloat << std::numeric_limits<double>::max()
              << " or " << std::hexfloat << std::numeric_limits<double>::max() << '\n';
}
