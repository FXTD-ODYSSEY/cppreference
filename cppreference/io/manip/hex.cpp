// cppreference link https://en.cppreference.com/w/cpp/io/manip/hex
#include <bitset>
#include <iostream>
#include <sstream>
int main()
{
    std::cout << "The number 42 in octal:   " << std::oct << 42 << '\n'
              << "The number 42 in decimal: " << std::dec << 42 << '\n'
              << "The number 42 in hex:     " << std::hex << 42 << '\n';
    int n;
    std::istringstream("2A") >> std::hex >> n;
    std::cout << std::dec << "Parsing \"2A\" as hex gives " << n << '\n';
    // the output base is sticky until changed
    std::cout << std::hex << "42 as hex gives " << 42
              << " and 21 as hex gives " << 21 << '\n';

    // Note: there is no I/O manipulator that sets up a stream to print out
    // numbers in binary format (e.g. bin). If binary output is necessary
    // the std::bitset trick can be used:
    std::cout << "The number 42 in binary:  " << std::bitset<8> { 42 } << '\n';
}
