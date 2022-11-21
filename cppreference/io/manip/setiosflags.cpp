// cppreference link https://en.cppreference.com/w/cpp/io/manip/setiosflags
#include <iomanip>
#include <iostream>

int main()
{
    std::cout << std::resetiosflags(std::ios_base::dec)
              << std::setiosflags(std::ios_base::hex
                     | std::ios_base::uppercase
                     | std::ios_base::showbase)
              << 42 << '\n';
}
