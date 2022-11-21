// cppreference link https://en.cppreference.com/w/cpp/io/manip/showpoint
#include <iostream>
int main()
{
    std::cout << "1.0 with showpoint: " << std::showpoint << 1.0 << '\n'
              << "1.0 with noshowpoint: " << std::noshowpoint << 1.0 << '\n';
}
