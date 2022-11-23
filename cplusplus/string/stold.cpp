// cplusplus link https://cplusplus.com/reference/string\stold
// stold example
#include <iostream> // std::cout
#include <string> // std::string, std::stod

int main()
{
    std::string orbits("90613.305 365.24");
    std::string::size_type sz; // alias of size_t

    long double pluto = std::stod(orbits, &sz);
    long double earth = std::stod(orbits.substr(sz));
    std::cout << "Pluto takes " << (pluto / earth) << " years to complete an orbit.\n";
    return 0;
}
