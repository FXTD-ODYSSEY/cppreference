// cppreference link https://en.cppreference.com/w/cpp/io/basic_istream/operator%3D
#include <iostream>
#include <sstream>

int main()
{
    std::istringstream s1;
    s1 = std::istringstream("test"); // OK

    std::cin = std::istringstream("test"); // ERROR: 'operator=' is protected
}
