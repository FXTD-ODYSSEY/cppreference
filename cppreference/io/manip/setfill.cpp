// cppreference link https://en.cppreference.com/w/cpp/io/manip/setfill
#include <iomanip>
#include <iostream>

int main()
{
    std::cout << "default fill: [" << std::setw(10) << 42 << "]\n"
              << "setfill('*'): [" << std::setfill('*')
              << std::setw(10) << 42 << "]\n";
}
