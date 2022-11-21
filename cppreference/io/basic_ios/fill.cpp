// cppreference link https://en.cppreference.com/w/cpp/io/basic_ios/fill
#include <iomanip>
#include <iostream>

int main()
{
    std::cout << "With default setting: [" << std::setw(10) << 40 << "]\n";
    char prev = std::cout.fill('x');
    std::cout << "Replaced '" << prev << "' with '"
              << std::cout.fill() << "': [" << std::setw(10) << 40 << "]\n";
}
