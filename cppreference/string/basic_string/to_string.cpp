// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/to_string
#include <iostream>
#include <string>

int main()
{
    for (const double f : { 23.43, 1e-9, 1e40, 1e-40, 123456789. })
        std::cout << "std::cout: " << f << '\n'
                  << "to_string: " << std::to_string(f) << "\n\n";
}
